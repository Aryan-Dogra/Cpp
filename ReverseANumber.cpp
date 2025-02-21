//Reverse a Number 

#include <iostream>
using namespace std;

int main(){
    int num, reversedNum = 0, remainder;

cout << "Enter a number: ";
cin >> num;

while(num != 0){
    remainder = num % 10;
    reversedNum = reversedNum * 10 + remainder;
    num = num /10;

}

cout <<"Remainder Number: "<<reversedNum << endl;

return 0;
}


//By importing library 

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){
//     string num;

//     cout << "Enter a number: ";
//     cin>>num;

//     reverse(num.begin(), num.end());

//     cout << "Reversed Number: "<< num <<endl;

//     return 0;
// }

