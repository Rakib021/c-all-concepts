#include <bits/stdc++.h>
using namespace std;
int missing_number(vector<int>arr, int n)
{
	int total = (n + 1) * (n + 2) / 2;
	for (int i = 0; i < n; i++)
		total -= arr[i];
	return total;
}

int main()
{
	int n;
	cin >> n;
	vector<int>arr(n-1);
	for (int i = 0; i < n - 1; i++)
	{
		cin >> arr[i];
	}
	cout << missing_number(arr, n - 1) << endl;
	return 0;
}
