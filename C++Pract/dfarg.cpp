#include<iostream>
using namespace std;

void swap( int &x , int &y){
    int temp;
    temp = x;
    x=y;
    y=temp;
}

int main (){
    int a = 25;
    int b = 26;
    cout<<"The value of a is " <<a<<endl;
    cout<<"The value of b is " <<b<<endl;

    swap(a,b);

    cout<<"The value after swap of a is " <<a<<endl;
    cout<<"The value after swap of b is " <<b<<endl;

    return 0;

}