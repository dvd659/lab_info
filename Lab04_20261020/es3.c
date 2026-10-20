#include <iostream> 
#include <iomanip>
#include <cfloat>

using namespace std; 

int main(){

    float array[10], n=__FLT_MAX__;
    int pos;
    
    for(int i=0; i<10; i++){
        array[i]= (37*i +15)%47 *0.1;
        cout << "array[" << i+1 << "] = " <<array[i] << endl;
    }
 
    for(int i=0; i< 10; i++){
        if(n>array[i]){
            n=array[i];
            pos=i+1;
        }
    }

    cout << "Il valore minore e' = " << setprecision(3) << n << endl;
    cout << "Posizione = " << pos <<endl;

return 0;
}