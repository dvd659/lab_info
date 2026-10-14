#include <iostream>

using namespace std; 

int main(){

    int somma=0,val,cont=0;

    cout << "Cominciare ad inserire i valori (!= 0: 0 per uscire)\n>_";
    cin >> val;
    somma +=val;

    while(val!=0){
        cout << ">_";
        cin >> val;
        somma += val;
        cont++;
    }
    
    cout << "Media = " << (float) somma/cont << endl;

return 0;
}