#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int vvoti[30],sum=0;
    
    ifstream flusso_in;

    flusso_in.open("voti.dat");

    if(flusso_in.open()){

        for(int i=0; i<30; i++){
            //if(){       come controllo se c'e' il dato?
                flusso_in  >> vvoti[i];
                sum +=vvoti[i];

                cout << "flag: voto estratto = " << vvoti[i] << endl;
            //}
        }
    }

    flusso_in.close("voti.dat");

    cout << "Media = " << (float) sum/30 << endl;
    

    return 0;
}