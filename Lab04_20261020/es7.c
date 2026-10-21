#include<iostream>
#include<fstream>
using namespace std;

int main(){

    int x=0, voti[30], N=0, voto;
    ifstream flusso_in;
    ofstream flusso_out;

    flusso_in.open("voti_zoppi.dat");

    if(!flusso_in.fail()){

        for(int i=0; i<30; i++){

            while(!flusso_in.eof()){

                flusso_in >> voto;
                N++;

                if(voto>17 && voto<33){

                    voti[x] = voto;
                    x++;
                }

            }

            flusso_in.close();
        }

//da qui: output
        flusso_out.open("voti_validi.dat");

            flusso_out << x << endl;

            for(int i=0; i<x; i++){

                flusso_out << voti[i];
                if(i!=(x-1)){
                    flusso_out << endl;
                }
            }

    } else cout << endl << "Errore!!" << endl;



    return 0;
}