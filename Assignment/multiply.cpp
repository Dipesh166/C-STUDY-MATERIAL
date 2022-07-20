#include<iostream>
using namespace std;
class A {
    int a,b,c;
    public:
    void input(){
        cout<<"GIVE THE VALUE OF A AND B"<<endl;
        cin>>a>>b;
    }
    void process(){
        c=a*b;
    }

    void output(){
        cout<<"THE MULTIPLIED VALUE IS :::"<<c<<endl;
    }
};

int main(){
    A ob;
    ob.input();
    ob.process();
    ob.output();
    return 0;
}