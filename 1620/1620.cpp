#include <bits/stdc++.h>

using namespace std;

int n, m;
string str;
map<string, int> n_mp;
map<int, string> m_mp;

int main()
{
	//입출력 싱크 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	
	cin >> n >> m;
	
	for(int i = 0; i<n; i++)
	{
		cin >> str;
		n_mp[str] = i+1; //1번부터
		m_mp[i+1] = str;
	}
	
	for(int i = 0; i<m; i++)
	{
		cin >> str;
		//atoi 문자이면 0 반환, 숫자이면 숫자 그대로 반환  
		//문자일때 
		if(atoi(str.c_str()) == 0)
		{
			cout << n_mp[str] << "\n";
		}
		else //숫자일때 
		{
			cout << m_mp[atoi(str.c_str())] << "\n";
		}
	}

	return 0;
}
