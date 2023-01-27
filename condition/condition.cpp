#include<iostream>
using namespace std;

int main(){
    bool x= true;
    bool y= false;
    int z=10;

    if(z<20){
        cout<<"True \n";

        if(x){
            cout<<"I am nested if\n";
        }
        else{
            cout<<"Hi i am nested else\n";
        }

    }
    else{
        cout<<"False\n";
    }
}