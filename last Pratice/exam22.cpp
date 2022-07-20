/* friend class if a class become friend class an it can access the private and protected function of that class */
#include<iostream>
using namespace std;

class A {
    int a,b;
    public:
    void get(){
        cout<<"eNTER THE VALUE OF A AND B"<<endl;
        cin>>a>>b;
    }
    friend class B;
};

class B {
    public:
    void add(A ob){
        int c = ob.a+ob.b;
        cout<<"THE VALUE IS =="<<c<<endl;

    }
};

int main(){
    A obb;
    B on;
    obb.get();
    on.add(obb);
    return 0;
}
