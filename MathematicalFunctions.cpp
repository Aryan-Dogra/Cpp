//Program to Display All Mathematical Functions

#include <iostream>
#include <cmath>  // For math functions

using namespace std;

int main() {
    int a, b;

    // Taking input
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Performing basic math operations
    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;
    cout << "Quotient: " << a / b << endl;
    cout << "Remainder: " << a % b << endl;

   

    return 0;
}
