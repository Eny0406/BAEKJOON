#include <bits/stdc++.h>

using namespace std;

int a[10];
int sum = 0;

int main()
{
	//입출력 싱크 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	
	//9개 숫자 입력 
	for(int i = 0; i<9; i++)
	{
		cin >> a[i];
	}
	
	sort(a, a+9); //next_permutation 사용시 정렬(순열) 
	
	do{
		//sum 초기화 
		sum = 0;
		
		//9개의 합 
		for(int k = 0; k<7; k++)
		{
			sum += a[k];
		}
		 
		//출력체크 
		/*
		for(int j = 0; j<9; j++)
		{
			cout << a[j] << ' ';
		}
		cout << '\n';
		*/
		
		//합이 100이면 탈출 
		if(sum == 100)
		{
			break;
		}
	}while(next_permutation(a,a+9)); //순열 - 9개중 7개 
	
	for(int j = 0; j<7; j++)
	{
		cout << a[j] << '\n';
	}
	
	return 0;
}
