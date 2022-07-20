//Example of both Abstract class and pure virtual function

#include<iostream>
using namespace std;

class A {  //Absrract class
    public:
    virtual void show()=0; //pure virtual function
    void disp(){
        cout<<" I am Base class"<<endl;
    }
};

class B : public A {
    public:
    void show (){
        cout<<"I am Derived class"<<endl;
    }
};

int main (){
    A *p;
    B ob;
    p=&ob;
    p->disp();
    return 0;
}
