//headgear 2�� , eye 1��
//(2+1) * (1+1) = 6 - 1 = 5
// �ƹ��͵� �� �Դ� ��� +1
// ���ϰ� �ƹ��͵� �� �Դ°�� ���� ������ -1 

#include <bits/stdc++.h>

using namespace std;

int n, m;
int result; //��°� 
string nm, gd; //�̸�, ���� 

int main()
{
	//����� ��ũ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	

	cin >> n;
	
	for(int k=0; k<n; k++)
	{
		result = 1; //�ʱ�ȭ 
		map<string, int> mp;
		cin >> m;
		
		for(int i=0; i<m; i++)
		{
			//�̸�, ���� �Է� 
			cin >> nm >> gd;
			//���� �߰� �ɶ����� ī��Ʈ 
			mp[gd]++;
		}
		
		for(auto c:mp)
		{
			//�ƹ��͵� ���Դ� ��� +1 
			result *= c.second + 1;
		}  
		//�� ���ѵ� �ƹ��͵� �� �Դ°�� -1 
		result--;
		//��� 
		cout << result << "\n";
	}
	return 0;
}
