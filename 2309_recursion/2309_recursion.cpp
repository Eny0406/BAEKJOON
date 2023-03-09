#include <bits/stdc++.h>

using namespace std;

int a[10];

int n = 9, r = 7;

void solve()
{
	int sum = 0;
	for(int i = 0; i<r; i++)
	{
		sum += a[i];
	}
	
	if(sum == 100)
	{
		sort(a, a+7);
		
		for(int j = 0; j<r; j++)
		{
			cout << a[j] << "\n";
		}
		
		exit(0);
	}
}

void makePermutation(int n, int r, int depth)
{
	if(r == depth)
	{
		return;
	}
	
	for(int i = depth; i<n; i++)
	{
		swap(a[i], a[depth]);
		makePermutation(n, r, depth + 1);
		swap(a[i], a[depth]);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	
	void makePermutation(int n, int r, int depth);
	makePermutation(n, r, 0);
	
	return 0; 
}
