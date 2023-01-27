#include<iostream>
using namespace std;

class Rectangle{
    public:
    int height,width;

    //area
    int calculate_rectangle(){
        return height*width;
    }

    //perimeter

    int calculate_peri(){
        return 2*(height+width);
    }
};
int main(){

Rectangle r1;
r1.height=4;
r1.width=8;
cout<<r1.calculate_rectangle()<<"\n";
cout<<r1.calculate_peri()<<"\n";
}