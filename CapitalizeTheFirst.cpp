// //capitalize the first letter of each word in a given string. Words must be separated by only one space.

#include <iostream>
using namespace std;    

void capitalizeFirstLetter(string &str){
    bool newWord = true;

    for (int i = 0; i < str.length(); i++){
        if (str[i] == ' '){
            newWord = true;
        }
        else if (newWord && str[i] >='a' && str [i] <= 'z'){
            str [i] = str[i] - 'a' + 'A';
            newWord = false;
        } else {
            newWord = false;
        }
    }
}

int main(){
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    capitalizeFirstLetter(input);

    cout << "Capitalized string: " << input << endl;

    return 0;
}


//using library
// #include <iostream>
// #include <cctype>
// using namespace std;

// void capitalizeFirstLetter(string &str){
//     bool newWord = true;

//     for (int i = 0; i < str.length(); i++){
//         if (str[i] == ' '){
//             newWord = true;
//         }
//         else if (newWord && islower(str[i])){
//             str[i] = toupper(str[i]);
//             newWord = false;
//         } else {
//             newWord = false;
//         }
//     }
// }

// int main(){
//     string input;
//     cout << "Enter a string: ";
//     getline(cin, input);

//     capitalizeFirstLetter(input);

//     cout << "Capitalized string: " << input << endl;

//     return 0;
// }