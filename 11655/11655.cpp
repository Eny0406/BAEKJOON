#include <bits/stdc++.h>

using namespace std;

string str;

int main()
{
	//����� ��ũ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//���ڿ� �Է� 
	getline(cin, str);
	
	//�ѱ��ھ� for�� 
	for(int i=0; i<str.size(); i++)
	{
		//�빮��(A:65 ~ Z:90) 
		if(str[i] >= 65 && str[i] < 91)
		{
			//Z �Ѿ�� A�� ���ư����� 
			if(str[i] + 13 > 90)
			{
				//Z �Ѿ ��� 
				str[i] = str[i] + 13 - 26;
			}
			else
			{
				str[i] = str[i] + 13;
			}
		}
		//�ҹ���(a:97 ~ z:122)
		else if(str[i] >= 97 && str[i] < 123)
		{
			//z �Ѿ�� a�� ���ư����� 
			if(str[i] + 13 > 122)
			{
				//z �Ѿ ��� 
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
