#include <bits/stdc++.h>

using namespace std;

int a[10];
int sum = 0;

int main()
{
	//����� ��ũ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	
	//9�� ���� �Է� 
	for(int i = 0; i<9; i++)
	{
		cin >> a[i];
	}
	
	sort(a, a+9); //next_permutation ���� ����(����) 
	
	do{
		//sum �ʱ�ȭ 
		sum = 0;
		
		//9���� �� 
		for(int k = 0; k<7; k++)
		{
			sum += a[k];
		}
		 
		//���üũ 
		/*
		for(int j = 0; j<9; j++)
		{
			cout << a[j] << ' ';
		}
		cout << '\n';
		*/
		
		//���� 100�̸� Ż�� 
		if(sum == 100)
		{
			break;
		}
	}while(next_permutation(a,a+9)); //���� - 9���� 7�� 
	
	for(int j = 0; j<7; j++)
	{
		cout << a[j] << '\n';
	}
	
	return 0;
}
