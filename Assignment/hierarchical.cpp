#include<iostream>
using namespace std;
class Base {
    protected:
    int a;
    public:
    void input(){
        cout<<"Give the value of a"<<endl;
        cin>>a;
    }
};

class Derive1 : public Base {
    private:
    int b;
    public:
    void input1(){
        cout<<"enter the value of derive 1"<<endl;
        cin>>b;
    }
    void output1(){
        cout<<"a ="<<a<<" "<<" b="<<b<<endl;
    }
};

class Derive2 : public Base {
    private:
    int c;
    public:
    void input2(){
        cout<<"enter the value of derive 2"<<endl;
        cin>>c;
    }
    void output2(){
        cout<<"a ="<<a<<" "<<" c="<<c<<endl;
    }
};

int main (){
    Derive1 ob;
    Derive2 ob1;
    ob.input();
    ob.input1();
    ob.output1();

    ob1.input();
    ob1.input2();
    ob1.output2();
    return 0;
}