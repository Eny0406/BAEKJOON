#include <bits/stdc++.h>

using namespace std;

//입력값, 역순 변경할 값 
string str, temp;

int main()
{
	//입출력 싱크 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//문자열 입력 
	cin >> str;
	
	//역순 할 값 
	temp = str;
	
	//역순 
	reverse(temp.begin(), temp.end());
	
	//기존이랑 역순이랑 같은지 확인 
	if(str == temp)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	
	return 0;
}
