#include <iostream>
#include <string>

using namespace std;

int main()
{
	// bool test = 1 < 2;
	// bool test = 'a' == 'A';
	// cout << test;

	int nbr1, nbr2; 
	cout << "Type a number: ";
	cin >> nbr1; 
	cout << "Type a second number: ";
	cin >> nbr2;
	cout << "These two numbers are the same: " << (nbr1 == nbr2);
}