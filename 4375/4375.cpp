//111%3 == 0 �̹Ƿ� 111�� �ڸ��� 3�� ���  
//1�� �̷���� n�� ��� ex) 1, 11, 111, 1111, 11111.... 
#include <bits/stdc++.h>

using namespace std;
//����ó�� 12�ڸ��ΰ�� �־ long long
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
				//ó�� 1 -> 11 -> 111 
				cnt = (cnt * 10) + 1;
				//(a+b)%n = (a%n) + (b%n)
				//(a*b)%n = (a%n) * (b%n)
				//�������� %n �ϴ� ���̶� ���� 
				cnt %= n;
				//�ڸ��� +1�� ���� 
				ret++;
			}
		}
	}
	
	return 0;
}
