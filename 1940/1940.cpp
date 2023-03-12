#include <bits/stdc++.h>

using namespace std;

int n, m, arr[15001];
int cnt = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//재료 개수 
	cin >> n;
	//갑옷을 만드는데 필요한 개수 
	cin >> m;
	
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	
	//순서 상관없이 뽑기(조합) 
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			//합이 갑옷 필요한 개수이면 카운트 
			if(arr[i] + arr[j] == m)
			{
				cnt++;
			}
		}
	}
	
	cout << cnt << "\n";
	
	return 0;
}
