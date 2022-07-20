
//class Templates

#include<iostream>
using namespace std;
template<class T>

class A{
    private:
    T a, b;
    public:
    A (T p ,T q){ 
        a=p; 
        b=q;
    }
    void show(){
        cout<<"A="<<a<<"  "<<"B="<<b<<endl;
    }
};

int main (){
    A <float> ob(20.5,10.6);
    ob.show();
    return 0;
}
