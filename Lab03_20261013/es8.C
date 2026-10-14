#include <iostream> 

using namespace std; 

int main(){

    char c;

    cout << "Inserire una lettera\n>";
    cin >> c;

    if(c>64 && c<91){
        c=c+32;
        cout << "Va qua che roba: " << c << endl;
    }

    else if(c>=97 && c<=122){
        c=c-32;
        cout << "Va qua che roba: " << c << endl;
    }

    else cout << "No se puede\n";


return 0;
}