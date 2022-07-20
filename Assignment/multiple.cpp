//example of multiple inheritance

#include<iostream>
using namespace std;

class Base1{
    private: 
    int a,b,c;
    public:
    void input(){
        cout<<"Give the value of base1 a and b"<<endl;
        cin>>a>>b;
    }
    void output(){
        c=a+b;
        cout<<"ADDITION =="<<c<<endl;
    }
};

class Base2{
    private: 
    int a,b,c;
    public:
    void input1(){
        cout<<"Give the value base2 of a and b"<<endl;
        cin>>a>>b;
    }
    void output1(){
        c=a-b;
        cout<<"SUBSTRACTION =="<<c<<endl;
    }
};
class Derive : public Base1, public Base2{
    private: 
    int a,b,c;
    public:
    void input2(){
        cout<<"Give the value of derive of a and b"<<endl;
        cin>>a>>b;
    }
    void output2(){
        c=a*b;
        cout<<"Multiplication =="<<c<<endl;
    }
};

int main (){
    Derive ob;
    ob.input2();
    ob.output2();

    ob.input1();
    ob.output1();

    ob.input();
    ob.output();
    return 0;
}