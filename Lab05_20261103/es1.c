#include<iostream>

using namespace std;

float leggivalido(float,float);



int main(){

    float a, b, x;
    
    cout << "\nInserire gli estremi chiusi dell'intervallo\n>_";
    cin >> a;
    cout << ">_";
    cin >> b;
    
    x = leggivalido(a,b);

    return 0;
}

float leggivalido(float a, float b){

    float xl, xnot=0, temp;

    if (!a<=b){
        temp=b;
        b=a;
        a=temp;
    }

    do{
        cout << "Inserire un valore qualsiasi\n>_";
        cin >> xl;
        if ((a<=xl and b>=xl) || (b<=xl and a>=xl)){
            cout << "Il valore e' compreso nell'intervallo!!\n";
        }
        else xl=0;
    }while(xl==0);

    return xl;
}