//friend function is not the member of the class but it can access the private and protected member of the class

#include<iostream>
using namespace std;

class A {
    int a,b;
    public:
    void input(){
        cout<<"ENTER THE VALUE OF A AND B"<<endl;
        cin>>a>>b;
    }
    friend void add(A ob);
};

void add( A ob){
    int c=ob.a + ob.b;
    cout<<"sUM ISS"<<c<<endl;
}

int main(){
    A obb;
    obb.input();
    add(obb);
    return 0;
}