#include<bits/stdc++.h>
using namespace std;
class Array{
    private:
    int *arr;
    int cap;
    int sz;
    void  Increase_size(){
        cap = cap*2;
        int *tmp = new int[cap];
        for(int i=0;i<sz;i++){
            tmp[i] = arr[i];
        }
        arr= tmp;
    }

    public:
    Array(){
        arr = new int ();
        cap=1;
        sz=0;
    }
    void push_back(int x){
        if(cap==sz)
        {
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    } 
};
int main(){

}