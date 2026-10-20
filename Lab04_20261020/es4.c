#include <iostream> 
using namespace std; 

int main(){

    char a[5],b[5];

    for(int i=0; i< 5; i++){
        cout << "Inserire la lettera numero " << i+1 << endl;
        cin >> a[i];
        b[4-i]=a[i];
    }

    cout << "Reversed array : ";

    for(int i=0; i< 5; i++){
        cout << b[i];
    }

    cout << endl;

return 0;
}