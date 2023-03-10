#include <bits/stdc++.h>

using namespace std;

string str;

int main()
{
	//입출력 싱크 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//문자열 입력 
	getline(cin, str);
	
	//한글자씩 for문 
	for(int i=0; i<str.size(); i++)
	{
		//대문자(A:65 ~ Z:90) 
		if(str[i] >= 65 && str[i] < 91)
		{
			//Z 넘어가면 A로 돌아가야함 
			if(str[i] + 13 > 90)
			{
				//Z 넘어간 경우 
				str[i] = str[i] + 13 - 26;
			}
			else
			{
				str[i] = str[i] + 13;
			}
		}
		//소문자(a:97 ~ z:122)
		else if(str[i] >= 97 && str[i] < 123)
		{
			//z 넘어가면 a로 돌아가야함 
			if(str[i] + 13 > 122)
			{
				//z 넘어간 경우 
				str[i] = str[i] + 13 - 26;
			}
			else
			{
				str[i] = str[i] + 13;
			}
		}
	}
	
	cout << str;
	
	return 0;
} 
