//111%3 == 0 이므로 111의 자리수 3이 출력  
//1로 이루어진 n의 비수 ex) 1, 11, 111, 1111, 11111.... 
#include <bits/stdc++.h>

using namespace std;
//예제처럼 12자리인경우 있어서 long long
typedef long long ll;

int n;

int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);
	
	while(scanf("%d", &n) != EOF)
	{	
		ll cnt = 1, ret = 1;
		for(;;)
		{
			if(cnt % n == 0)
			{
				cout << ret << "\n";
				break;
			}
			else
			{
				//ex) 11111 = 1111*10 + 1
				//처음 1 -> 11 -> 111 
				cnt = (cnt * 10) + 1;
				//(a+b)%n = (a%n) + (b%n)
				//(a*b)%n = (a%n) * (b%n)
				//마지막에 %n 하는 값이랑 같음 
				cnt %= n;
				//자리수 +1씩 해줌 
				ret++;
			}
		}
	}
	
	return 0;
}
