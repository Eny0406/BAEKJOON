//A, AA, BB, ABC, AAACCC �Ӹ���� �ȵ�. 

#include <bits/stdc++.h>

using namespace std;

int cnt_arr[100], flag; 
string str, result;
char mid;

int main()
{
	//����� ��ũ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	
	cin >> str;
	
	//���ĺ� ī��Ʈ cnt_arr[65] ~ cnt_arr[90] (A:65, Z:90)
	for(char a:str)
	{
		cnt_arr[a]++;
		//cout << a << "\n";
	}
	
	//���Ķ����� Z���� �������� 
	for(int i = 'Z'; i>= 'A'; i--)
	{
		//cnt_arr ī��Ʈ�� 1�� �̻��϶�(���ĺ� 1���� ������) 
		if(cnt_arr[i])
		{
			//Ȧ�� &1 
			if(cnt_arr[i] & 1)
			{
				//Ȧ�� 1���ΰ�� �߾ӿ� �� ���ĺ� 
				mid = char(i);
				//Ȧ�� ���� üũ 
				flag++;
				//AAACC �ΰ�� mid�� A 1�� �ְ� ������ 2���� �ٿ��� �Ǽ� -1 ���� 
				cnt_arr[i]--;
			}
			//Ȧ���� 2�� �̻��̸� �÷���� �Ұ��� 
			if(flag == 2)
			{
				break;
			}
			
			for(int j=0; j<cnt_arr[i]; j+=2)
			{
				//mid ���� �տ� ���ĺ� ���̱� 
				result = char(i) + result;
				//mid ���� �ڿ� ���ĺ� ���̱� 
				result += char(i);
			} 
		}
	}
	
	//Ȧ���� 1���ΰ�� 
	if(mid)
	{
		//AABBC �ΰ��  
		result.insert(result.begin() + result.size() / 2, mid);
	}
	//Ȧ�� 2�� �̻��̸� �÷���� �Ұ��� 
	if(flag == 2)
	{
		cout << "I'm Sorry Hansoo\n";
	}
	else
	{
		cout << result << "\n";
	}
	return 0; 
}
