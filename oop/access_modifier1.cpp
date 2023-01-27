#include<bits/stdc++.h>
using namespace std;
class Student{
private:
string name;
public:

int stu_id;
int stu_age;

void student_info(){
    cout<<"Name ="<<name<<"ID NO ="<<stu_id<<"Age ="<<stu_age<<"\n";
}


};
int main(){

    Student s;
    s.name="Rakib";
    s.stu_id=2107089;
    s.stu_age=24;

    s.student_info();
    

}

/*
public
private
protected
*/