//Swap Two Numbers
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Taking input
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display the swapped values
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
