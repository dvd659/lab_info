#include<iostream>
using namespace std;

int minarray(int[], int, int, int);

int main (){
    
    int num, a, b, minimo;
    
    cout << "inserire la dimensione dell'array\n>_";
    cin >> num;

    int ar[num];
    
    for(int i=0; i<num; i++){
        ar[i]= (8*(37 + i))%58*i;
        cout << "Valore " << i+1 << " = " << ar[i] << endl;
    }

    minimo = minarray(ar, num, a, b);
    cout << "\nmin c [a;b] = " << minimo << endl;

    return 0;
}

int minarray(int array[], int num, int a, int b){

    int min = 2147483647;

    cout << "inserire i 2 estremi dell'intervallo interno all'array (prima min e poi max)\n>_";
    cin >> a;
    cout << ">_";
    cin >> b;

    for(int i=a-1; i<b; i++){
        if(min>array[i]){
            min=array[i];
            cout << "flag";
        }

    }


    return min;
}
