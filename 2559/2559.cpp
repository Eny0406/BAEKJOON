#include <bits/stdc++.h>

using namespace std;

int n, m, max_value, temp;

int psum[100001];

int main()
{
	//입출력 싱크 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	
	//첫번째 2개 값 입력 
	cin >> n >> m;
	
	//최대값 저장공간 
	max_value = -10000001;
	
	//1부터 시작이라서 n+1 
	for(int i=1; i<n+1; i++)
	{
		cin >> temp;
		//누적합 
		psum[i] = psum[i-1] + temp;
		//cout << psum[i] <<' '<< psu합m[i-1] <<' '<< temp << '/';
	}
	
	//최대값 구하기 
	for(int k=m; k<n+1; k++)
	{
		//psum[k] - psum[k-m] -> 구간  
		max_value = max(max_value, psum[k] - psum[k-m]);
	}
	
	cout << max_value;
	
	return 0;
}
