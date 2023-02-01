#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
