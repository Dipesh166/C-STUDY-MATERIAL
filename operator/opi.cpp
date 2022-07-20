//operator overloading (urinary operator overloading)
#include<iostream>
using namespace std;

class Demo {
    int a;
    int b;
    public:
  Demo ( int x, int y){
        a=x;
        b=y;
    }

    void show (){
        cout<<a<<" "<<b<<endl;
    }

    void operator -(){
        a=-a;
        b=-b;
    }
};

int main (){
    Demo ob(10,20);
    ob.show();
    -ob;
    ob.show();
    return 0;
}