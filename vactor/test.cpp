#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=1;i<=n;i++){
        int input;
        cin>>input;
        v.push_back(input);
    }

    int last_element = v.back();
    cout<<last_element<<"\n";
int sz = v.size();
    for(int i=0;i<sz;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    v.pop_back();
    sz = v.size();
    for(int i=0;i<sz;i++){
        cout<<v[i]<<" ";
    }

}