#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;

    for(int i=1;i<=n;i++){
        int input;
        cin>>input;
        v.push_back(input);

    }
    int sz = v.size();
    cout<<sz<<"\n";
    v.clear();
    sz = v.size();
    cout<<sz<<"\n";
}