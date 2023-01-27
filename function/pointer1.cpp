#include<bits/stdc++.h>
using namespace std;
void func(int *x){
    *x=2500;
}
int main(){

int a=10;
int *ptr = &a;
func(ptr);
cout<<a<<endl;
}