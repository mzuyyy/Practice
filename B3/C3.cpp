#include <iostream>
#include <vector>

using namespace std;

bool check_mirror(int n)
{
	vector<int> a;
	while(n>0)
	{
		a.push_back(n%10);
		n=n/10;
	}
	for (int i=0; i<a.size()/2; i++)
	{
		if (a[i]!=a[a.size()-1-i])
			return false;
	}
	return true;
}

int main()
{
	int T;
	cin >> T;
	for (int i=0; i<T; i++)
	{
		int a, b, count=0;
		cin >> a >> b;
		for (int i=a; i<=b; i++)
		{
			if (check_mirror(i))
				count++;
		}
		cout << count << endl;
	}
}
