// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Student{
public:

string name;
int stu_id;
int age;
string mothers_name;
string fathers_name;

void student_information(){
  cout<<name<<"\n"<<stu_id<<"\n"<<age<<"\n"<<mothers_name<<"\n"<<fathers_name<<"\n";
}
};
int main(){
  Student s;
  s.name="Rakibul Islam";
  s.stu_id=2107089;
  s.mothers_name="Farida Begum";
  s.fathers_name="Md Ishaque";

  s.student_information();
  
}