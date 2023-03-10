#include <bits/stdc++.h>

using namespace std;

int n, idx;
string str, nm, pre, suf;

int main()
{
	//입출력 싱크
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//갯수 입력 
	cin >> n;
	//패턴 입력 ex)ab*cd
	cin >> str;
	
	//* 위치 찾기 
	idx = str.find('*');
	
	//* 앞까지 문자열 자르기 
	pre = str.substr(0,idx);
	//* 뒤까지 문자열 자르기 
	suf = str.substr(idx+1);
	
	for(int i=0; i<n; i++)
	{
		//파일이름 입력 
		cin >> nm;
		
		//크기 체크 ex)ab*cd  pre:2, suf:2    4 > 3 (abc) -> NE 
		if((pre.size() + suf.size()) > nm.size())
		{
			cout << "NE" << "\n";
		}
		else
		{
			//pre, suf 문자열 각 비교 
			if(pre == nm.substr(0, pre.size()) && suf == nm.substr(nm.size() - suf.size()))
			{
				cout << "DA" << "\n";
			}
			else
			{
				cout << "NE" << "\n";
			}
		}
	}
	
	return 0; 
} 
