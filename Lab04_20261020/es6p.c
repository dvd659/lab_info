#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int conta=0, vvoti[30], accu=0, val;

    ifstream file_in;
    ofstream file_out;

    file_in.open("voti.dat");

    if(!file_in.fail()){

        file_in >> val;                           // riempimento finche' vuole l'input
        while(!file_in.eof()){                    // negazione fine del file
            vvoti[conta]=val;
            conta++;
            file_in >> val;
        }

        cout << "Ci sono " << conta << " dati" << endl << "dati caricati:\n";
        for(int i=0; i< conta; i++){
            cout << vvoti[i] <<endl;
            accu+=vvoti[i];
        }

        cout << "Media = " << (float) accu/conta << endl;

    }
    else {
        cout << "errore!" << endl;

    } 

    file_in.close();

    file_out.open("copia_voti.dat"); //se il file esiste lo stampa, MA se esiste si cancella

    for(int i=0; i<conta; i++){
        file_out << vvoti[i] << endl;
    }

    return 0;
}