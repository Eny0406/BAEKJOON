#include <bits/stdc++.h>

using namespace std;

int arr[101];
string str;

int main()
{
	//입출력 싱크 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//문자열 입력 
	cin >> str; 
	
	//문자열 입력값 배열 넣기 
	for(char a:str)
	{
		//A:65 a:97 배열 a부터 [0] 맞추기 위해서 
		arr[a-'a']++;
		//출력값 체크 
		//cout << "a : " << a << '\n';
		//cout << "a-'a' : " << arr[a-'a'] << '\n';
	}
	
	for(int i; i<26; i++)
	{
		cout << arr[i] << ' ';
	}
	
	return 0;
}
