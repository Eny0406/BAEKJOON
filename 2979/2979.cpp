#include <bits/stdc++.h>

using namespace std;

int A, B, C;
int a, b;
int arr[101];
int fee = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> A >> B >>  C;
	
	for(int i=0; i<3; i++)
	{
		cin >> a >> b;
		
		for(int j=a; j<b; j++)
		{
			arr[j]++;
		}
	}
	
	//���üũ 
	/*
	for(int k=0; k<100; k++)
	{
		cout << "arr[" << k << "] : " << arr[k] << ' ';
	}
	cout << '\n';
	*/
	
	//������ 1~100 ������ 1���� ���� 
	for(int j=1; j<100; j++)
	{
		if(arr[j]) //1�̸� ��(1�� �Դ�) 
		{
			if(arr[j] == 1) //1�� ��� 
			{
				fee += A;
			}
			else if(arr[j] == 2) //2�� ��� 
			{
				fee += B * 2; //Ʈ���� ���� 
			}
			else //3�� ��� 
			{
				fee += C * 3; //Ʈ���� ���� 
			}
		}
	}
	
	cout << fee;
	
	return 0;
}
