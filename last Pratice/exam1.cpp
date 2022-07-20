#include<iostream>
using namespace std;

class A {
    private:
    int a,b;
    public:
    void show(){
        a=50;
        b=60;
        cout<<"a ="<<a<<" "<<"b="<<b<<endl;
    }
    friend class B;

};

class B {
    public:
    void disp(A ref){
        ref.a=100;
        ref.b=500;
         cout<<"a ="<<ref.a<<" "<<"b="<<ref.b<<endl;
        
    }
};

int main (){
    A ob;
    B ob1;
    ob.show();
    ob1.disp(ob);
    return 0;
}