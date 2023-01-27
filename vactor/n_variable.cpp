#include<bits/stdc++.h>


/*
time complexity = O(n+1 +n+1) =O(2*n+1)= O(2*n) = O(n)
space complexity = O(n)
*/
using namespace std;
int main(){
    int n;//o(1)
    cin>>n;
    vector<int>a(n); //o(n)

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maxi = a[0];
    int mini = a[0];
    int sum =0 ;

    for(int i=0;i<n;i++){
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
        sum = sum +a[i];
    }
    cout<<maxi<<"\n";
    cout<<mini<<"\n";
    cout<<sum<<"\n";
}