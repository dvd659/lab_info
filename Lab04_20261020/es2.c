#include <iostream> 
#include <iomanip>

using namespace std; 

int main(){

    int array[20]={1,2,3,4,5,6,7,8,9,10,11,12,2,14,15,16,17,18,19,20}, n, bo=0;

    cout << "quale valore cerchi\n>_";
    cin >> n;

    for(int i=0; i<20; i++){
        
        if(array[i]==n){
            cout << "valore in posizione numero " << i+1 << endl;
            bo++;
        }
    }
    if(bo==0){
        cout << "-1\n";
    }
    
return 0;
}