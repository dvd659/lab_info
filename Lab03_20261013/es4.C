#include <iostream>

using namespace std; 

int main(){

    int somma=0,val,cont=0;
    char siono;

    cout << "Cominciare ad inserire i valori\n";

    do{
        
        cout << ">_";
        cin >> val;
        somma += val;
        cont++;
        cout << "Vuoi continuare? (y = hell yeah)" << endl;
        cin >> siono;

    }while(siono==121 || siono==89);

    if(cont!=0){    

        cout << "Media = " << (float) somma/cont << endl;
    }
    else cout << "cya";

return 0;
}