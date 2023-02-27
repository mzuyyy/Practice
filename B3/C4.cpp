#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	char a[n][m];
	int b[n][m]={};
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cin >> a[i][j];
			if (a[i][j]=='*')
			{
				b[i][j] = -1;
			}
		}	
	}
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			if (b[i][j]==0)
			{
				for (int k=-1; k<=1; k++)
				{
					for (int q=-1; q<=1; q++)
					{
						if ( i+k<=n-1 && j+q<=m-1 && i+k>=0 && j+q>=0 && b[i+k][j+q]==-1)
						{
							b[i][j]++;
						}
					}
				}
			}
		}	
	}	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			if (b[i][j]==-1)
			{
				cout << "*" << " ";
			}
			else
			{
				cout << b[i][j] << " ";
			}
		}	
		cout << endl;
	}
}
