//���Ѱ��� ������ ��Ƽ� ����*������ ����
#include <bits/stdc++.h>

using namespace std;

//int�� ���� ����� long long a,b 
//a, b �� 20�� ���� ��� int �Ұ��� 
typedef long long ll;

int a, b, c;
int result;

ll go(ll a, ll b)
{
	ll ret;
	//1�� ���Ҷ� 
	if(b==1)
	{
		return a%c;
	}
	//b�� ���� ���� 
	//2^32 -> 2^16 -> 2^8 -> 2^4 ..
	ret = go(a, b/2);
	//���� ������ �Ȱ��� ���� ����*���� 
	ret = (ret * ret) % c;
	
	//b�� Ȧ���ΰ�� 
	if(b % 2)
	{
		//Ȧ�� �϶��� 1���� ���Ƽ� a��ŭ ���� �ѹ� �� ���� 
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
