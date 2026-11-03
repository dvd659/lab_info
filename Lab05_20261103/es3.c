#include<iostream>
using namespace std;

int minchangearray(int[], int);

int main (){
    
    int num, minimo, aibk;
    
    cout << "inserire la dimensione dell'array\n>_";
    cin >> num;

    int ar[num], ar2[num];
    
    for(int i=0; i<num; i++){
        ar[i]= (8*(37 + i))%58*i;
        cout << "Valore " << i+1 << " = " << ar[i] << endl;
    }

    minchangearray(ar, num);

    cout << "array now:" << endl;

    for(int i=0; i<num; i++){
        cout << "Valore " << i+1 << " = " << ar[i] << endl;
    }
    



    return 0;
}

int minchangearray(int array[], int num){

    int min = 2147483647, pos, a, b, aibk;

    cout << "inserire i 2 estremi dell'intervallo interno all'array (prima min e poi max)\n>_";
    cin >> a;
    cout << ">_";
    cin >> b;

    for(int i=a-1; i<b; i++){
        if(min>array[i]){
            min=array[i];
            pos = i;
            cout << "flag: POS " << pos+1 << " min = " << min << endl;
        }

    }

    aibk = array[a-1];
    array[a-1] = array[pos];
    array[pos] = aibk; 

    return 0; 
}
