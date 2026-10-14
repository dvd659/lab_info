#include <iostream> 

using namespace std; 

int main(){

    int a,b;

    cout << "Inserire un numero intero\n>";
    cin >> a;
    cout << "Inserire un numero intero\n>";
    cin >> b;
    cout << "a+b = " << a+b << endl;
    cout << "a-b = " << a-b << endl;
    cout << "a*b = " << a*b << endl;
    cout << "a/b = " << a/b << endl;
    cout << "(1.0*a)/b = " << (1.0*a)/b << endl;
    cout << "1.0*(a/b) = " << 1.0*(a/b) << endl;
    cout << "a/(1.0*b) = " << a/(1.0*b) << endl;


return 0;
}