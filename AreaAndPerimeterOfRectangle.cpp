//Display Area and Parameter of rectangle

#include <iostream>
using namespace std;

int main(){
    int l;
    cout<<"Enter length: ";
    cin>>l;

    int w;
    cout<<"Enter width: ";
    cin>>w;

    cout<<"Area of the rectangle: "<< l*w <<endl;
    cout<<"Perimeter of the rectangle: "<<2*(l+w)<<endl;

    return 0;
}