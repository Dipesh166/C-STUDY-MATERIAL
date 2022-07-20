//Multilevel inheritance example

#include<iostream>
using namespace std;

class Base {
    protected:
    int a;
    public:
    void input(){
        cout<<"GIVE VALUE OF BASE"<<endl;
        cin>>a;
    }
};

class Derive1 : public Base {
    protected:
    int b;
    public:
    void input1(){
        cout<<"Give the value of derive 1"<<endl;
        cin>>b;

    }
};

class Derive2 : public Derive1 {
    private:
    int c;
    public:
    void input2(){
        cout<<"Give the value of derive2"<<endl;
        cin>>c;
    }

    void output(){
        cout<<"a ="<<a<<"b ="<<b<<"c ="<<c<<endl;

    }

};

int main (){
    Derive2 ob;
    ob.input();
    ob.input1();
    ob.input2();
    ob.output();

    return 0;
}