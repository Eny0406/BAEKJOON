#include <bits/stdc++.h>

using namespace std;

int cnt;
int cnt_arr[26]; 
string str, result;

int main()
{
	//����� ��ũ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//������ �� �Է� 
	cin >> cnt;
	
	//�� ��ŭ �Է� 
	for(int i=0; i<cnt; i++)
	{
		//���� �̸� 
		cin >> str;
		//�ƽ�Ű�ڵ�� ���ڸ��� üũ �� ī��Ʈ(a:97) 
		cnt_arr[str[0]-'a']++;
	}
	
	//a~z���� 5�� �̻� �� ���� 
	for(int j=0; j<26; j++)
	{
		if(cnt_arr[j] >= 5)
		{
			result += (j + 'a');
		}
	}
	
	//1���� ������ ��� 
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
