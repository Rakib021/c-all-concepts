#include<bits/stdc++.h>
using namespace std;

bool check_occur(vector<int>arr,int n,int k){
    int left = 0;
    int right = n - 1;
    int first_occurrence = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == k) {
            first_occurrence = mid;
            right = mid - 1;
        } else if (arr[mid] < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }



    left = 0;
    right = n - 1;
    int last_occurrence = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == k) {
            last_occurrence = mid;
            left = mid + 1;
        } else if (arr[mid] < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }


    if (first_occurrence != -1 && last_occurrence != -1 && last_occurrence > first_occurrence) {
        return true;
    } else {
        return false;
    }
}
int main(){
    int n;
    cin>>n;
     vector<int>arr(n);
     int k;
     cin>>k;
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
    if (check_occur(arr, n, k)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;

}