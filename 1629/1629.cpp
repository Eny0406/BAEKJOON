//곱한것을 변수에 담아서 변수*변수로 곱함
#include <bits/stdc++.h>

using namespace std;

//int는 범위 벗어나서 long long a,b 
//a, b 가 20억 들어온 경우 int 불가능 
typedef long long ll;

int a, b, c;
int result;

ll go(ll a, ll b)
{
	ll ret;
	//1번 곱할때 
	if(b==1)
	{
		return a%c;
	}
	//b를 절반 나눔 
	//2^32 -> 2^16 -> 2^8 -> 2^4 ..
	ret = go(a, b/2);
	//변수 담은걸 똑같이 곱함 변수*변수 
	ret = (ret * ret) % c;
	
	//b가 홀수인경우 
	if(b % 2)
	{
		//홀수 일때는 1개가 남아서 a만큼 따로 한번 더 곱함 
		//ex)2^2 * 2^2 * 2^1
		ret = (ret * a) % c;
	}
	
	return ret;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> b >> c;
	
	result = go(a, b);
	
	cout << result << "\n";
	
	return 0;
}
