//AABB ->AA, BB �����ܾ�(o)
//ABAB ->������ �����ؼ� �����ܾ�(x) 
#include <bits/stdc++.h>

using namespace std;

int n;
int cnt=0;
string str; 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//�ܾ��� �� �Է� 
	cin >> n;
	
	for(int i=0; i<n; i++)
	{
		//���ڿ� �Է� 
		cin >> str;
		//���ü��� 
		stack<char> stk;
		for(char a:str)
		{
			//���ÿ� ���� �ִ��� üũ && ���� ������ ���̶� �� �� ������? 
			if(stk.size() && stk.top() == a)
			{
				stk.pop();
			}
			else
			{
				stk.push(a);
			}
		}
		if(stk.size() == 0)
		{
			//���� �ȿ� ���� �ϳ��� ������ �����ܾ� 
			cnt++;
		}
	}
	
	cout << cnt << "\n";
	
	return 0;
}
