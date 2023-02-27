#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int k=1;
	int a[n][m];
	int i=0, j=0;
	int t=0, p=0;
	while(k<=n*m)
	{
		for (i=p; i<m-1-p; i++)
		{
			a[j][i] = k;
			k++;
		}
		for (j=t; j<n-1-t; j++)
		{
			a[j][i] = k;
			k++;
		}
		for (i=m-1-p; i>p; i--)
		{
			a[j][i] = k;
			k++;
		}
		for (j=n-1-t; j>t; j--)
		{
			a[j][i] = k;
			k++;
		}
		t++;
		p++;
	}
	for (int l=0; l<n; l++)
	{
		for (int k=0; k<m; k++)
		{
			cout << a[l][k] << " ";
		}
		cout << endl;
	}
}
