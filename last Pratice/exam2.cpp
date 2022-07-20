#include<iostream>
using namespace std;
class A {
    protected:
    int a,b;
    public:
    void show(){
        a=40;
        b=60;
        cout<<"A="<<a<<ends<<"B="<<b<<endl;
    }
};

class B : public A {
    public:
    void hop(){
        a=5000;
        b=5000;
        cout<<"A="<<a<<ends<<"B="<<b<<endl;

    }
        
    
};

int main (){
    B ob;
    ob.show();
    ob.hop();
    return 0;
}
    