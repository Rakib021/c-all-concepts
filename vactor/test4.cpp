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
    bool emp = v.empty();
    cout<<emp<<"\n";
    v.clear();
    emp = v.empty();
    cout<<emp<<"\n";
}