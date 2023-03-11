//headgear 2개 , eye 1개
//(2+1) * (1+1) = 6 - 1 = 5
// 아무것도 안 입는 경우 +1
// 곱하고 아무것도 안 입는경우 빼기 때문에 -1 

#include <bits/stdc++.h>

using namespace std;

int n, m;
int result; //출력값 
string nm, gd; //이름, 종류 

int main()
{
	//입출력 싱크 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	

	cin >> n;
	
	for(int k=0; k<n; k++)
	{
		result = 1; //초기화 
		map<string, int> mp;
		cin >> m;
		
		for(int i=0; i<m; i++)
		{
			//이름, 종류 입력 
			cin >> nm >> gd;
			//종류 추가 될때마다 카운트 
			mp[gd]++;
		}
		
		for(auto c:mp)
		{
			//아무것도 안입는 경우 +1 
			result *= c.second + 1;
		}  
		//다 곱한뒤 아무것도 안 입는경우 -1 
		result--;
		//출력 
		cout << result << "\n";
	}
	return 0;
}
