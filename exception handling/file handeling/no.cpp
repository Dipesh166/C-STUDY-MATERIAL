// C++ program to illustrate the
// input and output of file using
// getline() and write() function
#include <iostream>
#include <string>
using namespace std;

// Driver Code
int main()
{
	char line[100];

	// Get the input
	cin.getline(line, 10);

	// Print the data
	cout.write(line, 5);
	cout << endl;

	// Print the data
	cout.write(line, 20);

	cout << endl;

	return 0;
}