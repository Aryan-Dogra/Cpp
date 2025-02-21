//Find Largest Number Among Three Numbers

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    
    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    cout<<"Enter c: ";
    cin>>c;

    if(a>b && a>c){
        cout<<"A is Greater";
    }
    else if (b>c && b>a){
        cout<<"B is greater";
    }
    else {
        cout<<"C is greater";
    }
}