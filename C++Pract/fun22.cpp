#include<iostream>
using namespace std;

int add (int a, int b){
    int c;
    c=a*b;
    return c;
}





int main (){
    
    int n1=50;
    int n2=60;
    
    int sum;
    sum = add(n1,n2);
    cout<<"the value is " <<sum;
   
    return 0;
}