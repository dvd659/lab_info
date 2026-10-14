#include <iostream> 
using namespace std; 

int main(){

    int somma=0,val,cont;

    cout << "Quanti valori sono da inserire?\n>";
    cin >> cont;
    
    if(cont!=0){

        cout << "Comincia a inserire i valori\n";

        for(int i=0; i<cont; i++){
            cout << ">_";
            cin >> val;
            somma += val;
          }

        cout << "Media = " << (float) somma/cont << endl;

    }else cout << ".-.\n";


return 0;
}