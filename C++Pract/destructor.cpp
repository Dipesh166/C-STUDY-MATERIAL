#include<iostream>
using namespace std;

class Test{
    public:
    int n;
    Test(){
        n=100;
        cout<<"The constructor is :"<<n<<endl;
    }

    ~Test(){
        cout<<"The Constructor is destroyed"<<endl;
    }

};
int main (){
    Test ob;
    return 0;
}