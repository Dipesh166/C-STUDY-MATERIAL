//function overloading 
#include<iostream>
using namespace std;

class A {
    int n=45,m=50;
    public:
    
    void fun(){
        int c=n+m;
        cout<<"Addition=="<<c<<endl;

    }

     
    void fun(int a, int b){
        int d=a-b;
        cout<<"Substraction=="<<d<<endl;

    }
    
};

int main (){
    A ob;
    ob.fun();
    ob.fun(100,500);
    return 0;
}