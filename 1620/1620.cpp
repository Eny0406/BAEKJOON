#include <bits/stdc++.h>

using namespace std;

int n, m;
string str;
map<string, int> n_mp;
map<int, string> m_mp;

int main()
{
	//����� ��ũ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	
	cin >> n >> m;
	
	for(int i = 0; i<n; i++)
	{
		cin >> str;
		n_mp[str] = i+1; //1������
		m_mp[i+1] = str;
	}
	
	for(int i = 0; i<m; i++)
	{
		cin >> str;
		//atoi �����̸� 0 ��ȯ, �����̸� ���� �״�� ��ȯ  
		//�����϶� 
		if(atoi(str.c_str()) == 0)
		{
			cout << n_mp[str] << "\n";
		}
		else //�����϶� 
		{
			cout << m_mp[atoi(str.c_str())] << "\n";
		}
	}

	return 0;
}
