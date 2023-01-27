#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    vector<int>arr;
    arr.resize(n);

    for(int i=0;i<n;i++)
    cin>>arr[i];

    sort(arr.begin(),arr.end());

    int ans=0;

    for(int i=0;i<n;i++){
        if(i==0){
            ans++;
            continue;
        }
        if(arr[i]!=arr[i-1]){
            ans++;
        }
    }
    cout<<ans<<"\n";
}