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

    //es 2

    int count2=0,n=0;
    int *vali;

    for(int i=0; i<count; i ++){
        if(dyna[i]>=18){
            count2++;
        }
    }


    vali = new int[count2];

   
    for(int i=0; i<count; i++){
        if(dyna[i]>=18){
            vali[n]=dyna[i];
            n++;
        }
    }

    ofstream file_out;
    file_out.open("votiOK.dat");
    
    if(!file_out.fail()){
        file_out << count2 << endl;
        for(int i =0; i<count2; i++){
            file_out << vali[i] << endl;
        }

    }

    file_out.close();
    delete[] dyna;      // bisogna sempre chiuderlo alla fine!!!
    dyna = NULL;
    delete[] vali;
    vali = NULL;
    return 0;
}