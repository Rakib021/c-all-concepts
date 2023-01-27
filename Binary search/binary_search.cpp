#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    int low=0;
    int high = arr.size()-1;

    

    int first_idx=-1;
    while(low<=high){
        int mid = low+(high -low)/2;

        if(arr[mid]==target){
            first_idx= mid;
            high = mid-1;
            
        }
     else   if(target>arr[mid]){
            low = mid+1;
        }
        else if(target<arr[mid]){
            high = mid-1;
        }
    }

   low=0;
    high = arr.size()-1;

    

    int last_idx=-1;
    while(low<=high){
        int mid = low+(high -low)/2;

        if(arr[mid]==target){
            last_idx= mid;
            low = mid+1;
            
        }
     else   if(target>arr[mid]){
            low = mid+1;
        }
        else if(target<arr[mid]){
            high = mid-1;
        }
    }
    cout<<first_idx<<" "<<last_idx;
   
}