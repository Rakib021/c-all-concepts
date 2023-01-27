#include <bits/stdc++.h>
using namespace std;
int sort(int arr[], int temp[], int left, int right, int k)
{
	int i, j, mid, count = 0;
	if (right > left) {
    	mid = (right + left) / 2;
    	count = sort(arr, temp, left, mid, k);
    	count += sort(arr, temp, mid+1, right, k);

    	i = left;
    	j = mid+1;
    	int index = left;

    	while (i <= mid && j <= right) {
        	if (arr[i] + arr[j] == k) {
            	count++;
            	i++;
            	j++;
        	} else if (arr[i] + arr[j] < k) {
            	temp[index] = arr[i];
            	i++;
            	index++;
        	} else {
            	temp[index] = arr[j];
            	j++;
            	index++;
        	}
    	}
    	while (i <= mid) {
        	temp[index] = arr[i];
        	i++;
        	index++;
    	}
    	while (j <= right) {
        	temp[index] = arr[j];
        	j++;
        	index++;
    	}
    	for (int i = left; i <= right; i++) {
        	arr[i] = temp[i];
    	}
	}
	return count;
}
int main() {
	int n, k;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
    	cin >> arr[i];
	}
	cin >> k;
	int temp[n];
	int count = sort(arr, temp, 0, n-1, k);
	cout << count << endl;
	return 0;
}
