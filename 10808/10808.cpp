#include <bits/stdc++.h>

using namespace std;

int arr[101];
string str;

int main()
{
	//����� ��ũ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//���ڿ� �Է� 
	cin >> str; 
	
	//���ڿ� �Է°� �迭 �ֱ� 
	for(char a:str)
	{
		//A:65 a:97 �迭 a���� [0] ���߱� ���ؼ� 
		arr[a-'a']++;
		//��°� üũ 
		//cout << "a : " << a << '\n';
		//cout << "a-'a' : " << arr[a-'a'] << '\n';
	}
	
	for(int i; i<26; i++)
	{
		cout << arr[i] << ' ';
	}
	
	return 0;
}
