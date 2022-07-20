// function overriding 
#include<iostream>
using namespace std;

class A {
    public:
    virtual void fun(){
        cout<<"C is great"<<endl;
    }
};

class B : public A {
    public:
    void fun(){
        cout<<"C++ is Best programming"<<endl;
    }
};

int main (){
    A *p; B ob;
    p=&ob;
    p->fun();

    return 0;
}