#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream file_in;
    int count=0, dato;

    int *dyna;

    file_in.open("votiZoppi.dat");

    if(file_in.fail()){
        cout << "\nerrore apertura\n";
    }

    file_in >> dato;
    while(!file_in.eof()){
    count ++;
    file_in >> dato;
    }

    cout << "num di valori e': " << count << endl;

    file_in.close();

    dyna = new int[count];      //creazione dell'array dinamico (inserendo la dimensione)
    // do per scontato che la locazione dinamica si andata a buon fine

    file_in.open("votiZoppi.dat");
    
    if(file_in.fail()){
        cout << "\nerrore apertura\n";
    }

    for(int i=0; i<count; i++){
        file_in >> dyna[i];
    }

    file_in.close();

    for(int i=0; i<count; i++){
        cout << "valore "<<i<<" = " << dyna[i] << endl;
    }


    delete[] dyna;      // bisogna sempre chiuderlo alla fine!!!
    dyna = NULL;
    return 0;
}