#include <bits/stdc++.h>

using namespace std;

int dex(int time[], int low, int high)
{
	int pivotal = time[high];
	int left = low;
	int right = high - 1;
	while(left<=right)
	{
		while(time[left] < pivotal && left<=right)
		{
			left++;
		}
		while(time[right] > pivotal && left<=right)
		{
			right--;
		}
		if (left >= right)
			break;
		swap(time[left], time[right]);
		left++;
		right--;
	}
	swap(time[left], time[high]);
	return left;
}

void quicksort(int time[], int low, int high)
{
	if (low<high)
	{
		int index = dex(time, low, high);
		quicksort(time, low, index-1);
		quicksort(time, index+1, high);
	}
	else return;
}

int main()
{
	int n;
	cin >> n;
	
	int time[n];
	for (int i=0; i<n; i++)
	{
		cin >> time[i];
	}
	quicksort(time, 0, n-1);
	for (int i=0; i<n; i++)
	{
		cout << time[i] << " ";
	}
}
