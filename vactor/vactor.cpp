#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;
for(int i=0;i<10;i++){
    a.push_back(i);
    
}
a.insert(a.begin()+3,123);
for(int i=0;i<a.size();i++){
cout<<a[i]<<endl;

}
}