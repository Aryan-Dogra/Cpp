// Check Whether a Number is Prime or Not

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n ;

    if ( n <= 1){
        cout << "Neither Prime nor Composite" << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i =2; i * i <= n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime){
    cout << "Prime" << endl;
    }
    else {
        cout << "Composite" << endl;
    }
    return 0;
}