//AABB ->AA, BB 좋은단어(o)
//ABAB ->선끼리 교차해서 좋은단어(x) 
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
	
	//단어의 수 입력 
	cin >> n;
	
	for(int i=0; i<n; i++)
	{
		//문자열 입력 
		cin >> str;
		//스택선언 
		stack<char> stk;
		for(char a:str)
		{
			//스택에 값이 있는지 체크 && 스택 마지막 값이랑 들어갈 값 같은지? 
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
			//스택 안에 값이 하나도 없으면 좋은단어 
			cnt++;
		}
	}
	
	cout << cnt << "\n";
	
	return 0;
}
