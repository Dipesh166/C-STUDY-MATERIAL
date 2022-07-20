#include<iostream>
using namespace std;

void square (int& y){

    y=y*y;
    
}

int main (){
    int a;
    cout<<"Give the Value:";
    cin>>a;

    cout<<"The value Before call is a :"<<a<<endl;
     square(a);

     cout<<"The value After Call is a :"<<a<<endl;
     return 0;
    
}