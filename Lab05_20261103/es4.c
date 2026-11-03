#include <iostream>
using namespace std;

int append(int[], int, int, int);

int main(){

    int size, num, xnew;

    cout << "inserire il size dell'array da compilare e quanti valori di questi (aka dev'essere minore o uguale) si vogliono inserire\n>_";
    cin >> size;
    cout << ">_";
    cin >> num;

    int a[size];

    for (int i=0; i<num; i++){
        a[i]=(37*i +15)%47;
        cout << "valore " << i+1 << " = " << a[i] << endl;

    }

    cout << "inserire il valore da inserire nell'array\n>_";
    cin >> xnew;

    num = append(a, size, num, xnew);

    for (int i=0; i<num; i++){
        cout << "valore " << i+1 << " = " << a[i] << endl;

    }

return 0;
}

int append(int v[], int size, int num, int el){

    if(num==size){
        return -1;
    }
    else{
        v[num] = el;
        num++;
        return num;
    }
}