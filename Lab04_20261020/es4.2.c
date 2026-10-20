// variante dell'es4: gli array devono essere grandi 10 anche se il testo e' di 5

#include <iostream> 
using namespace std; 

int main(){

    char a[10],b[10];

    for(int i=0; i < 5; i++){
        cout << "Inserire la lettera numero " << i+1 << endl;
        cin >> a[i];
        b[4-i]=a[i];
    }

    cout << "Reversed array : ";

    for(int i=0; i< 5; i++){
        cout << b[i];
    }

    cout << endl;

    for(int i=0; i< 10; i++){
        cout << a[i] <<endl;
    }

return 0;
}