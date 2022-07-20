#include<iostream>
using namespace std;

class A {
    public:
    virtual void sum (){
        cout<<" I am  Base class";
    }

};


class B:public A {
    public:
    void sum (){
        cout<<" I am  Derived class";
    }

};

int main (){
    A *p;
    B ob;
    p=&ob;
    p->sum();
    return 0;
}