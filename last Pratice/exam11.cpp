//run time polymorphism and virtual function example
#include<iostream>
using namespace std;

class A {
    public:
    virtual void show (){
        cout<<"I AM Base class"<<endl;
    }
    
};

class B : public A {
    public:
    void show(){
        cout<<" I am derived class"<<endl;
    }
};

int main (){
    A *p;
    B ob;
    p=&ob;
    p->show();
    return 0;
}