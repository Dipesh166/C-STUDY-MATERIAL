#include<iostream>
using namespace std;

class Base1{
    protected:
    int a,b;
    public:
    void input(){
        cout<<"ENter the value of a and b"<<endl;
        cin>>a>>b;
    }
};

class Base2{
    protected:
      int c,d;
    public:
    void input2(){
        cout<<"ENter the value of c and d"<<endl;
        cin>>c>>d;
    }

};

class C : public Base1, public Base2 {
    protected:
    int Add;
    public:
    void SUM(){
        Add=a+b+c+d;
        cout<<"The value is "<<Add<<endl;

    }
    
    
};
int main (){
    C ob;
    ob.input();
    ob.input2();
    ob.SUM();
    return 0;
}