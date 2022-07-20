#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    int num1, num2,num3;
    cout<<"Give me The Num1, Num2 and Num3"<<endl;
    cin>>num1>>num2>>num3;
    cout<<"num1 is"<<setw(8)<<num1<<endl<<"num2 is"<< setw(16)<<num2<<endl<<"num3 is"<< setw(4)<<num3<<endl;
    return 0;

}