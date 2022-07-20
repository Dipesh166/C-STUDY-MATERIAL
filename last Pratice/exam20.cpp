//parameterized constructor
// the constructor that accepts and receive the parameters are called parameterized constructor

#include<iostream>
using namespace std;

class A {
    int a,b;
    public:
    A(int x, int y){
        a=x;
        b=y;

    }
    void show (){
        cout<<"A=-="<<a<<"  "<<"B==="<<b<<endl;
    }
};

int main (){
    A ob(20,54);
    ob.show();
    return 0;
}