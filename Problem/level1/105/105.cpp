#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	int L, H, R;
	int start = 10000;
	int end = 0;
	int building[10001];
	string temp;
	
	memset(building, 0, sizeof(building));
	
	while(cin >> L >> H >> R)
	{
		for(int i = L; i < R; i++)
			if(H > building[i])
				building[i] = H;
		
		if(R > end)
			end = R;
		
		if(L < start)
			start = L;
	}
	
	int j;
	for(j = start; j < end; j++)
		if(building[j] != building[j - 1])
			cout << j << ' ' << building[j] << ' ';
			
	cout << end << ' ' << building[j + 1] << endl;
	
	return 0;
}
