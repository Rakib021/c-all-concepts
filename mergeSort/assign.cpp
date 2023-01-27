#include<bits/stdc++.h>
using namespace std;

int merge_sort_and_count_pairs(int arr[], int left, int right, int k) {
    if (left >= right) return 0;
    int mid = (left + right) / 2;
    int count = merge_sort_and_count_pairs(arr, left, mid, k) + merge_sort_and_count_pairs(arr, mid + 1, right, k);
    int i = left, j = mid + 1;
    int temp[right - left + 1];
    int pos = 0;
    while(i <= mid && j <= right) {
        if (arr[i] > arr[j]) {
            count += mid - i + 1;
            temp[pos++] = arr[j++];
        }
        else {
            temp[pos++] = arr[i++];
        }
    }
    while(i <= mid) temp[pos++] = arr[i++];
    while(j <= right) temp[pos++] = arr[j++];
    for(int i = left, j = 0; i <= right; i++, j++) arr[i] = temp[j];
    return count;
}

int main() {
    int n, k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>k;
    cout<<merge_sort_and_count_pairs(a, 0, n-1, k);
    return 0;
}
