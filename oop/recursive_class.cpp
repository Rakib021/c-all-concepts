#include<iostream>
using namespace std;
class Person{
public:

    string name;
    Person *father_name,*mother_name;

    void print_info(){
        cout<<"Name ="<<name<<"\n";
        cout<<"Fathers name ="<<father_name->name<<"\n";
        cout<<"Mothers name ="<<mother_name->name<<"\n";
    }
};
int main(){

    Person p;
    p.father_name = new Person;
    p.mother_name= new Person;
    p.name ="Rahul";
    p.father_name->name="shihab sha";
    p.mother_name->name="rokeya";
    p.print_info();

}