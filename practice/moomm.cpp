#include<iostream>
using namespace std;

int main(){
    int n;
    
    float* ptr;
    cout<<"Enter no of Students"<<endl;
    cin>>n;

    ptr= new float[num];
    cout<<"Enter the Gpa of students"<<endl;

    for(int i =0; i<n; i++){
        cout<<"Student "<<i+1<<":"<<endl;
        cin >>*(ptr + i) ;
    }

    cout<<"Displaying the GPA"<<endl;
    
    for(int i=0; i<n; i++){
        cout<<"Student "<<i+1<<":"<< *(ptr + i);
        
    }

    delete ptr;

    
    return 0;


}