#include <bits/stdc++.h>

using namespace std;

//�Է°�, ���� ������ �� 
string str, temp;

int main()
{
	//����� ��ũ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//���ڿ� �Է� 
	cin >> str;
	
	//���� �� �� 
	temp = str;
	
	//���� 
	reverse(temp.begin(), temp.end());
	
	//�����̶� �����̶� ������ Ȯ�� 
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
