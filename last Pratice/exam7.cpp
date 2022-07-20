//encapsulation best example is class
#include<iostream>
using namespace std;

class A {
    private:
    int a,b;
    public:
    void show(){
        cout<<"Enter the value a and b"<<endl;
        cin>>a>>b;
    }
    void dis(){
        int c;
        c=a+b;
        cout<<"SUM++="<<c<<endl;
    }
};

int main (){
    A ob;
    ob.show();
    ob.dis();
    return 0;
}