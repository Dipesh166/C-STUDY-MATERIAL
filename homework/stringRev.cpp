#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str = "I'll study in Academia";
    vector<string> strArr;
    string shortStr;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            shortStr.push_back(str[i]);
            strArr.push_back(shortStr);
        }
        else if (str[i] == ' ')
        {
            strArr.push_back(shortStr);
            shortStr = "";
        }
        else
        {

            shortStr.push_back(str[i]);
        }
    }
    for (int i = 0; i < strArr.size(); i++)
    {
        cout
            << strArr[i] << " ";
    }
    return 0;
}