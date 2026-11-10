#include <iostream>
using namespace std;

void scambia(float & a, float & b);

int main (){

    float a=5, b=3;
    //float& ra=a, rb=b;
    cout << a << endl << b <<endl;
    
    scambia(a,b);

    cout << a << endl << b << endl;
    
    return 0;
}

void scambia(float& a, float& b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}