// single inheritance

#include<iostream>
using namespace std;

class Base {
    protected:
    int a,b;
    public:
    void show(){
        cout<<"Enter the value"<<endl;
        cin>>a>>b;
    }
};

class Derived : public Base {
    private:
    int m,n;
    public:
    void get(){
        cout<<"Enter the value"<<endl;
        cin>>m>>n;

    }

    void dis(){
        cout<<"a="<<a<<"  "<<"b="<<b<<endl;
         cout<<"m="<<m<<"  "<<"n="<<n<<endl;
    }
};

int main (){
    Derived ob;
    ob.show();
    ob.get();
    ob.dis();
    return 0;
}