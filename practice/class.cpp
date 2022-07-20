#include<iostream>
 using namespace std;
 class Student{
     public:
     string name;
     int regId;
     string DOB;
     string email;


     void printname(){
         cout<<"My name is :"<<name<<"\nMy regId is:"<<regId<<"\nMY DOB is:"<<DOB<<"\nMy email is :"<<email;
     }
 };

 int main(){
     Student obj1;

     obj1.name="Dipesh";
     obj1.regId=1900000024;
     obj1.DOB="2002 Oct 8";
     obj1.email="dipeshmandal160@gmail.com";

     obj1.printname();
     return 0;
 }