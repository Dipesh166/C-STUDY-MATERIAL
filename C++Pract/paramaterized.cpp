#include<iostream>
using namespace std;

class A {
    private:
    int a,b;
    public:
    A(int x, int y){
        a=x;
        b=y;
    }

    void see(){
        cout<<"The value of a :"<<a<<endl;
        cout<<"The value of b :"<<b;
    }
};

int main (){
    A obj(50,20);
    obj.see();
    return 0;

}