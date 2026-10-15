#include <iostream> 
#include <iomanip>

using namespace std; 

int main(){

    int k,n=1;
    float s=0;

    cout << "k = a?\n>";
    cin >> k;

    for(int i=0; i<k; i++){
        s += 1.0/n;
        n++;
        if ((i+1)%100==0){
            cout << "Rip n" << right << setw(11) << i+1 << " Somma = " << fixed << setprecision(18) << s << endl;
        }
    }


return 0;
}