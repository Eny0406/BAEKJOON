#include <bits/stdc++.h>

using namespace std;

int n, m, arr[15001];
int cnt = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//��� ���� 
	cin >> n;
	//������ ����µ� �ʿ��� ���� 
	cin >> m;
	
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	
	//���� ������� �̱�(����) 
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			//���� ���� �ʿ��� �����̸� ī��Ʈ 
			if(arr[i] + arr[j] == m)
			{
				cnt++;
			}
		}
	}
	
	cout << cnt << "\n";
	
	return 0;
}
