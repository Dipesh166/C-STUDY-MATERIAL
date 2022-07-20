
//Constructor is the special function which is used to create and intialize object
// Constructor has same name as class and it is always in the public
//constructor has only one access modifier and it doesn't inherit 
//compiler has default constructor for evety c++ classes and it also don't inherit

#include<iostream>
using namespace std;

class A{
    private:
    int a; 
    public:
    A(){
   a=5000;

    }
    void show(){
        cout<<"the value of a"<<a<<endl;
    }
};

int main (){
    A ob;
    ob.show();
    return 0;
}