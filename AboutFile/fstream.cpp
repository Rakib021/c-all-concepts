#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream of;
    of.open("1.txt");

    ifstream ifs;
    ifs.open("0.txt");
    int x;
    double y,z;

ifs>>x>>y>>z;
cout<<x<<" "<<y<<" "<<z<<endl;


    // cout<<
    // of<<"Hello My name is Rakibul Islam and ....\n";
    ifs.close();
    of.close();
}