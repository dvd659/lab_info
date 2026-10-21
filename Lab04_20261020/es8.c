#include<iostream>
#include<fstream>
using namespace std;

int main(){

    int voti[30], N , sum=0, voto, M = 17, m = 33;
    ifstream flusso_in;
    ofstream flusso_out;

    flusso_in.open("voti_validi.dat");

    if(!flusso_in.fail()){

        flusso_in >> N;

        for(int i=0; i<N; i++){
            while(!flusso_in.eof()){

                flusso_in >> voto;
                sum += voto;
                
                if(m>=voto){
                    m=voto;
                }
                if(M<=voto){
                    M=voto;
                }
            }

            flusso_in.close();
        }
    }

    flusso_out.open("analisi_voti.dat");
    flusso_out << (float) 1.0*sum/N << endl << m << endl << M;

    return 0;
}