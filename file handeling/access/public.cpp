//public example

#include<iostream>
using namespace std;

class A {
    public:
    int a;
    void show(){
        a=50;
        cout<<"the value is =="<<a<<endl;
    }
};

int main (){
    A obj;
    obj.show();
    obj.a=100;
    cout<<"The value of public a is"<<obj.a;
    return 0;
}