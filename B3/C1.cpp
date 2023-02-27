#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[1001]={};
	for (int i=0; i<n; i++)
	{
		int x;
		cin >> x;
		a[x]++;
		if (a[x]>1)
		{
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";	
}
