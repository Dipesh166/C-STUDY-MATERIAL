#include<iostream>
using namespace std;
int main (){
    int age;
    cout<<"Tell me Your age ";
    cin>>age;
    if(age<18){
        cout<<"You can0t come to the party"<<endl;
    }
    else if (age == 18){
        cout<<"You are kid but you can come"<<endl;
    }
    else{
        cout<<"WELCOME TO THE PARTY !!!!!!"<<endl;
    }
    return 0;
}