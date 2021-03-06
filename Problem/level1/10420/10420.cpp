#include<iostream>
#include<map>

using namespace std;

int main(void)
{
	int n;
	string country, temp;
	map<string, int> count;
	map<string, int>::iterator iter;
	
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		cin >> country;
		count[country]++;
		getline(cin, temp);
	}
	
	for(iter = count.begin(); iter != count.end(); iter++)
		cout << iter->first << " " << iter->second << endl;
	
	return 0;
}
