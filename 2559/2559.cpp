#include <bits/stdc++.h>

using namespace std;

int n, m, max_value, temp;

int psum[100001];

int main()
{
	//����� ��ũ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	
	//ù��° 2�� �� �Է� 
	cin >> n >> m;
	
	//�ִ밪 ������� 
	max_value = -10000001;
	
	//1���� �����̶� n+1 
	for(int i=1; i<n+1; i++)
	{
		cin >> temp;
		//������ 
		psum[i] = psum[i-1] + temp;
		//cout << psum[i] <<' '<< psu��m[i-1] <<' '<< temp << '/';
	}
	
	//�ִ밪 ���ϱ� 
	for(int k=m; k<n+1; k++)
	{
		//psum[k] - psum[k-m] -> ����  
		max_value = max(max_value, psum[k] - psum[k-m]);
	}
	
	cout << max_value;
	
	return 0;
}
