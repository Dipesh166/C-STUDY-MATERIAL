//Compile time polymorphism
#include<iostream>
using namespace std;

class A {
    float a,b;
    public:
    void show ( int x, int y){
        a=x;
        b=y;
        cout<<"a=="<<a<<"  "<<"b=="<<b<<endl;
    }

    void show (float x, float y){
       a=x;
        b=y;
        cout<<"a=="<<a<<"  "<<"b=="<<b<<endl;
    }
};

int main (){
    A ob,ob1;
    ob.show(10,20);
    ob1.show(10.2f, 50.2f);
    return 0;
}