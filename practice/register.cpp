#include <iostream>
using namespace std;

void registerStorageClass()
{

	cout << "Demonstrating register class\n";

	// declaring a register variable
	register char b = 'G';
    register int a = 5445;

	// printing the register variable 'b'
	cout << "Value of the variable 'b'"
		<< " declared as register: " << b<<endl;
        cout << "Value of the variable 'a'"
		<< " declared as register: " << a<<endl;
}
int main()
{

	// To demonstrate register Storage Class
	registerStorageClass();
	return 0;
}
