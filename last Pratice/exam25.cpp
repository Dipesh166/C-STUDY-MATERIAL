//exception handling 
#include<iostream>
using namespace std;

int main (){
    int a,b,c;
    cout<<"ENter the value of a and b"<<endl;
    cin>>a>>b;
    try{
        if(b==0)
        throw b;
        else{
            c=a/b;
            cout<<"VALUE IS ="<<c<<endl;
        }
        
    }
    catch(int x){
            cout<<"Can't divide cause of "<<x<<endl;
        }
    return 0;
}