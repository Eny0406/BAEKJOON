//A, AA, BB, ABC, AAACCC 팰린드롬 안됨. 

#include <bits/stdc++.h>

using namespace std;

int cnt_arr[100], flag; 
string str, result;
char mid;

int main()
{
	//입출력 싱크 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	
	cin >> str;
	
	//알파벳 카운트 cnt_arr[65] ~ cnt_arr[90] (A:65, Z:90)
	for(char a:str)
	{
		cnt_arr[a]++;
		//cout << a << "\n";
	}
	
	//정렬때문에 Z부터 안쪽으로 
	for(int i = 'Z'; i>= 'A'; i--)
	{
		//cnt_arr 카운트가 1개 이상일때(알파벳 1개라도 있을때) 
		if(cnt_arr[i])
		{
			//홀수 &1 
			if(cnt_arr[i] & 1)
			{
				//홀수 1개인경우 중앙에 들어갈 알파벳 
				mid = char(i);
				//홀수 갯수 체크 
				flag++;
				//AAACC 인경우 mid에 A 1개 넣고 나머지 2개는 붙여야 되서 -1 해줌 
				cnt_arr[i]--;
			}
			//홀수가 2개 이상이면 플랜드롬 불가능 
			if(flag == 2)
			{
				break;
			}
			
			for(int j=0; j<cnt_arr[i]; j+=2)
			{
				//mid 기준 앞에 알파벳 붙이기 
				result = char(i) + result;
				//mid 기준 뒤에 알파벳 붙이기 
				result += char(i);
			} 
		}
	}
	
	//홀수가 1개인경우 
	if(mid)
	{
		//AABBC 인경우  
		result.insert(result.begin() + result.size() / 2, mid);
	}
	//홀수 2개 이상이면 플랜드롬 불가능 
	if(flag == 2)
	{
		cout << "I'm Sorry Hansoo\n";
	}
	else
	{
		cout << result << "\n";
	}
	return 0; 
}
