// C++ program to illustrate the
// input and output of data using
// get() and puts()
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	char data;
	int count = 0;

	cout << "Enter Data: ";

	// Get the data
	cin.get(data);

	while (data != '\n') {
		// Print the data
		cout.put(data);
		count++;

		// Get the data again
		cin.get(data);
	}

	return 0;
}