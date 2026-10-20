#include <iostream> 
#include <iomanip>

using namespace std; 

int main(){

    int array[10], sum=0;

    for(int i=0; i< 10; i++){
        cout << "Inserisci il valore numero " << i+1 << endl;
        cin >> array[i];
        sum += array[i];
    }

    cout << "La media e' = " << setprecision(3) << (float) sum/10 << endl;

return 0;
}