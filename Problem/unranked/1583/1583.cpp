#include<iostream>

using namespace std;

int main(void)
{
	int n, num, ans;
	
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> num;
		
		int temp = num;
		int count = 0;
		while(temp != 0)
		{
			temp /= 10;
			count++;
		}
		
		int flag = 0;
		for(int i = num - 9 * count; i < num; i++)
		{
			int sum = i;
			temp = i;
			
			while(temp > 0)
			{
				sum += temp % 10;
				temp /= 10;
			}
			
			if(sum == num)
			{
				flag = 1;
				ans = i;
				break;
			}
		}
		
		if(flag)
			cout << ans << endl;
		else
			cout << 0 << endl;
	}
	
	return 0;
}
