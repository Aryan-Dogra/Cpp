//Power of a number

#include <iostream>
using namespace std;

int main(){
    int base, exponent, result = 1;

    cout << "Enter base: ";
    cin >> base ;
    cout << "Enter exponent: ";
    cin >> exponent;

    for(int i = 1; i<= exponent; i++){
        result *= base;
    }

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}