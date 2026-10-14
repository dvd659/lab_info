#include <iostream> 
using namespace std; 

int main(){
    int a,b;
    cout << "Inserire un valore >=0 e, successivamente, un altro >0\n>_";  
    cin >> a; cout<< ">_";
    cin >> b;
    if(a>=0 && b>0){
            int r=1,m; 
            
            if (a<b) {
                int t=b, b=a, a=t;
            }
            else {
            
                while(r!=0){
                r = a%b;
                a=b;
                m=b;
                b=r;
                }
                
                cout << "MCD=" << m << endl;
            }

            


    }
    
    else cout << "Errore: riprova seguendo le istruzioni\n";
    

return 0;
}