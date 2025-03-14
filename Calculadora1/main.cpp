#include <iostream>
using namespace std;
int main (){
    int numero1;
    int numero2;
    int signo;
    int resultado =0;
    cout<< "escriba un numero: " ;
    cin>> numero1;
    cout<< "escriba otro numero: ";
    cin>> numero2;
    cout<< "escriba su operacion (tenga en cuenta que 1 es suma,2 es resta, 3 es multilicacion y 4 es division): ";
    cin >> signo;
    
    switch (signo) {
        
        case 1: signo = 1;
        
        resultado= numero1 + numero2; 
        cout<< "la suma de los dos numeros es : " <<resultado; break;
        
        case 2: signo = 2; 
        resultado= numero1 - numero2; 
        cout<< "la resta de sus numeros es : " <<resultado; break;
        
        case 3: signo = 3; 
        resultado= numero1 * numero2; 
        cout<<  "el producto de su multilicacion es : " <<resultado; break;
        
        case 4: signo = 4; 
        resultado= numero1 / numero2;
        cout<< "la division de sus numeros es: " <<resultado; break;
       
        
    }
    }

