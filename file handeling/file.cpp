#include<iostream>
#include<fstream>
using namespace std;
int main (){
    
    string st2;

    ifstream in("text.txt");
    in>>st2;

    cout<<st2;

    return 0;
    }