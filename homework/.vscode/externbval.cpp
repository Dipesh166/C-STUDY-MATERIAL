#include<iostream>
using namespace std;

int x;
void externhero(){
    extern x=5;
    cout<<"The value of the extern "<<x<<endl;


    x=4;
    int y=55;
    cout<<"The value is the "<<x<<endl;
    cout<<"The value is the "<<y<<endl;


}

int main (){
    externhero();
    return 0;   
}
