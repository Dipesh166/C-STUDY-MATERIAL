#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a = 54328764;
    int sum = 0;
    int len = log10(a) + 1;
    for (int i = 0; i < len; i++)
    {
        int t = a % 10;
        sum = sum + t;
        a = a / 10;
    }
   cout << "THe sum is: " << sum << endl;
    return 0;
}