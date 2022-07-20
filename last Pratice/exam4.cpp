//multiple level inheritance 
#include<iostream>
using namespace std;

class Base {
  protected:
    int a;
    public:
    void show(){
        cout<<"Enter the value a "<<endl;
        cin>>a;
    }
};

class Derived1 : public Base {
    private:
    int b;
    public:
    void boo(){
        cout<<"Enter the value b "<<endl;
        cin>>b;

    }

    void see(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};

class Derived2 : public Base {
    private:
    int c;
    public:
    void put(){
        cout<<"Enter the value c "<<endl;
        cin>>c;

    }

    void get(){
        cout<<"a="<<a<<endl;
        cout<<"c="<<c<<endl;
    }
};

int main (){
    Derived1 ob;
    Derived2 ob1;

    ob.show();
    ob.boo();
    ob.see();
    ob1.show();
    ob1.put();
    ob1.get();
    return 0;
}