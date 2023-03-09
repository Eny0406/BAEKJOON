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
	
	//출력체크 
	/*
	for(int k=0; k<100; k++)
	{
		cout << "arr[" << k << "] : " << arr[k] << ' ';
	}
	cout << '\n';
	*/
	
	//범위가 1~100 까지라서 1부터 시작 
	for(int j=1; j<100; j++)
	{
		if(arr[j]) //1이면 참(1은 왔다) 
		{
			if(arr[j] == 1) //1대 경우 
			{
				fee += A;
			}
			else if(arr[j] == 2) //2대 경우 
			{
				fee += B * 2; //트럭당 가격 
			}
			else //3대 경우 
			{
				fee += C * 3; //트럭당 가격 
			}
		}
	}
	
	cout << fee;
	
	return 0;
}
