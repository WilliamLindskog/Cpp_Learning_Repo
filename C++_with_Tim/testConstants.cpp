#include <iostream>
#include <string>

using namespace std; 

int main() {
    int n, x;
    cin >> n; 
    cout << n; 
    //cout << cin.fail();
    cin.clear();
    cin.ignore(1000, '\n');
    cin >> x; 
    cout << x; 
}