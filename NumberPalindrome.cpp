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