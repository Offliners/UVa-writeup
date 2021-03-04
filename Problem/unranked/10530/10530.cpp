#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	int n;
	string s1, s2;
	
	while(cin >> n && n)
	{
		int ans = 0;
		int num[11];
		memset(num, 0, sizeof(num));
		
		cin >> s1 >> s2;
		while(s1[0] != 'r')
		{
			if(s2[0] == 'h')
			{
				for(int i = n; i < 11; i++)
				{
					if(num[i] == -1)
						ans = -1;
					else
						num[i] = 1;
				}
			}
			else if(s2[0] == 'l')
			{
				for(int j = n; j > 0; j--)
				{
					if(num[j] == 1)
						ans = -1;
					else
						num[j] = -1;
				}
			}

			cin >> n;
			cin >> s1 >> s2;
		}	
		
		if(ans == 0 && num[n] == 0)
			cout << "Stan may be honest" << endl;
		else
			cout << "Stan is dishonest" << endl;
	}
	
	return 0;
} 
