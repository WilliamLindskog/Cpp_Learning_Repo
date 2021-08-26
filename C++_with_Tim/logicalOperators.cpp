#include <iostream>
#include <string>

using namespace std; 

int main ()
{
	bool x = !false; 
	cout << x << "\n"; 
	bool y = true && false;
	cout << y << "\n"; 
	bool z = true || false; 
	cout << z; 
}