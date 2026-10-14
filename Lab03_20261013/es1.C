#include <iostream> 
using namespace std; 

int main(){
    int a,b;
    cout << "Inserire un valore >=0 e, successivamente, un altro >0\n>_";  
    cin >> a; cout<< ">_";
    cin >> b;
    if(a<0 || b<0){
            cout << "Almeno un valore e' negativo\n";
    }
    if (b==0){
        cout << "Il denominatore non puo' essere =0!!\n";
    }
    else cout << "Rapporto =" << a/b << "\nResto =" << a%b << endl;
    

system("pause");
return 0;
} 