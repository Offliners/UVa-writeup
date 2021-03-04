#include<iostream>

using namespace std;

int main(void)
{
	int n, e, f, c, temp;
	
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> e >> f >> c;
		e += f;
		
		int ans = 0;
		while(e >= c)
		{
			temp = e / c;
			ans += temp;
			e = e % c + temp;
		}
		
		cout << ans << endl;
	}
	
	return 0;
}
