#include <bits/stdc++.h>

using namespace std;

int cnt;
int cnt_arr[26]; 
string str, result;

int main()
{
	//입출력 싱크 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//선수의 수 입력 
	cin >> cnt;
	
	//수 만큼 입력 
	for(int i=0; i<cnt; i++)
	{
		//선수 이름 
		cin >> str;
		//아스키코드로 앞자리만 체크 후 카운트(a:97) 
		cnt_arr[str[0]-'a']++;
	}
	
	//a~z까지 5개 이상만 성 저장 
	for(int j=0; j<26; j++)
	{
		if(cnt_arr[j] >= 5)
		{
			result += (j + 'a');
		}
	}
	
	//1개라도 있으면 출력 
	if(result != "")
	{
		cout << result;
	}
	else
	{
		cout << "PREDAJA";
	}
	
	return 0;
} 
