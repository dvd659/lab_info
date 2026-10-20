#include <iostream> 
using namespace std; 

int main(){

    char a[5],b[5];
    int c=0;

    for(int i=0; i< 5; i++){
        cout << "Inserire la lettera numero " << i+1 << endl;
        cin >> a[i];
        b[4-i]=a[i];
    }

    cout << "Reversed array : ";

    for(int i=0; i< 5; i++){
        cout << b[i];
        if (a[i]==b[i]){
            c++;
        }
    }

    cout << endl;

    if (c==5){
        cout << "La parola e' palindroma!!" << endl;
    }

return 0;
}