//Check Whether a Number is Palindrome or Not

#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string num;

    cout << "Enter a number: ";
    cin >> num;

    string reversedNum = num;
    reverse(reversedNum.begin(), reversedNum.end());

  if(num == reversedNum){
    cout<< num << " is a Palindrom number."<< endl;
  }
  else {
    cout << num << " is not a palindrom number."<< endl;
  }
return 0;
}

//Without any library

// #include <iostream>
// using namespace std;

// int main(){
//     int num, reversedNum = 0, remainder, originalNum;

//     cout << "Enter a number: ";
//     cin >> num;

//     originalNum = num;
//Reverse a Number 
//     while (num != 0){
//         remainder = num % 10; 
//         reversedNum = reversedNum * 10 + remainder;
//         num /= 10;
//     }

//     if (originalNum == reversedNum){
//         cout << originalNum << " is a Palindrome number." << endl;
//     }

//     else {
//         cout << originalNum << " is NOT a palindrome number." << endl;
//     }
//     return 0;
// }