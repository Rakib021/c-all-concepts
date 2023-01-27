#include<iostream>
using namespace std;
int main(){
    // string s ="This is a string";

    // for(int i=0;i<s.size();i++){
    //     s[i] = s[i] +1;
    // }
    // s.pop_back(); //deleted last element from string

    // s.erase(s.begin());

    string s;
    getline(cin,s);

    s.erase(s.begin());
    s.pop_back();
    

    cout<<s<<endl;
}