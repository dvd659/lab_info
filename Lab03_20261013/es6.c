#include <iostream> 

using namespace std; 

int main(){

    int a,c;

    cout << "Inserire un numero intero (Prova con 2147483647)\n>";
    cin >> a;
    c = a+1;
    cout << "Valore precedente = " << a-1 << "\nValore inserito = " << a << "\nValore successivo = " << a+1 << endl;
    cout << "c -1 = " << c-1 << endl;
    


return 0;
}