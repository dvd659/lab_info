#include <iostream>
using namespace std;

//int append(int[], int, int, int);
int insertAt(int[], int, int, int, int);

int main(){

    int size, num, xnew, where;

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
    cout << "inserire dove vuoi inserire il valore da inserire nell'array\n>_";
    cin >> where;

    num = insertAt(a, size, num, xnew, where);

    if(num>0){
        for (int i=0; i<num; i++){
            cout << "valore " << i+1 << " = " << a[i] << endl;

        }
    } else cout << num << endl;

return 0;
}

int insertAt(int v[], int size, int num, int el, int pos){

    int bk;
    
    if (pos>num){
        return -2;
    }

    if (num >= size || pos < 0){
        cout << "\nflag errore\n";
        return -1;
    }

    else{
        bk = v[pos-1];
        v[pos-1] = el;
        v[num] = bk;
        num++;
        return num;
    }
}

/*int append(int v[], int size, int num, int el){

    if(num==size){
        return -1;
    }
    else{
        v[num] = el;
        num++;
        return num;
    }
}*/