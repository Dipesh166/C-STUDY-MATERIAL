#include<iostream>
using namespace std;

class A {
    int a,b,c;
    public:
    void fun(){
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
        try {
            if(b==0)
            throw b;
            else{
                c=a/b;
                cout<<"The value is "<<c<<endl;

            }
        }
        catch(int x){
            cout<<"The value is"<<x<<endl;

        }
    }
};

int main (){
    A OB;
    OB.fun();
    return 0;
}