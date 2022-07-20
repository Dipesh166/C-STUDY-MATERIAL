#include<iostream>
using namespace std;
int main (){
    int* pointInt;
    float* pointFloat;

    pointInt= new int;
    pointFloat= new float;

    *pointFloat=1.25f;
    *pointInt=45;

     cout << *pointInt << endl;
  cout << *pointFloat << endl;

  delete pointInt;
  delete pointFloat;
    return 0;
}