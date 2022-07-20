//destructor
#include<iostream>
using namespace std;

class A {
    int a;
    public:
    A (){
        a=100;
        cout<<a<<endl;
    }
    ~A(){
        cout<<"COnstrucor destroyed";
    }
    };

    int main(){
        A ob;
        

        return 0;
    }