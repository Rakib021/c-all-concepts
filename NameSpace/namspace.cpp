#include<iostream>
using namespace std;

int x=5,y,z;
int func(int a,int b){
    return a+b;
}

namespace info{

int x=10;
}

int main(){
    cout<<info::x<<endl;
    

    
}