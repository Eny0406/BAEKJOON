#include <bits/stdc++.h>

using namespace std;

int n, idx;
string str, nm, pre, suf;

int main()
{
	//����� ��ũ
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//���� �Է� 
	cin >> n;
	//���� �Է� ex)ab*cd
	cin >> str;
	
	//* ��ġ ã�� 
	idx = str.find('*');
	
	//* �ձ��� ���ڿ� �ڸ��� 
	pre = str.substr(0,idx);
	//* �ڱ��� ���ڿ� �ڸ��� 
	suf = str.substr(idx+1);
	
	for(int i=0; i<n; i++)
	{
		//�����̸� �Է� 
		cin >> nm;
		
		//ũ�� üũ ex)ab*cd  pre:2, suf:2    4 > 3 (abc) -> NE 
		if((pre.size() + suf.size()) > nm.size())
		{
			cout << "NE" << "\n";
		}
		else
		{
			//pre, suf ���ڿ� �� �� 
			if(pre == nm.substr(0, pre.size()) && suf == nm.substr(nm.size() - suf.size()))
			{
				cout << "DA" << "\n";
			}
			else
			{
				cout << "NE" << "\n";
			}
		}
	}
	
	return 0; 
} 
