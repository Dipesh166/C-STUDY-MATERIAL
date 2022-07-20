#include<iostream>
using namespace std;

class A {
    float a,b;
    public:
    void add (int x, int y){
        a=x;
        b=y;
        cout<<"A="<<a<<" "<<"B="<<b<<endl;
    }
    
    void add (float x, float y){
       a=x;
        b=y;
        cout<<"A="<<a<<" "<<"B="<<b<<endl;
    }

};

int main(){
    A ob,ob2;
    ob.add(20,40);
    ob2.add(5.60f, 5.50f);
    return 0;
}