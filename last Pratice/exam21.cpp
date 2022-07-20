/* the constructor which is used to copy or intalize the value of one object to the another object is known as Copy Constructor */
#include<iostream>
using namespace std;

class A {
    int a,b;
    public:
    A(int x, int y){
    a=x; b=y;
    }
    A( A &ref){
        a=ref.a;
        b=ref.b;
    }
    void show(){
        cout<<a<<"  "<<b<<endl;

    }
};

int main(){
    A ob(10,20);
    A ob1=ob;
    ob.show();

    ob1.show();

    return 0;
}