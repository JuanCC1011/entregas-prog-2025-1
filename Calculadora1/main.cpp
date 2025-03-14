/******************************************************************************

                              calculadora estandart
                diseño de una calculadora que tenga la entrada de dos números
                  y al digitar alguna orden ("casos") realizar la operacion 
                                  correspondiente
                    

*******************************************************************************/
#include <iostream>
using namespace std;
int main (){
    //ingreso de variantes: numero1, numero2, signo y resultado//
    
    int numero1;
    int numero2;
    int signo;
    //ingreso de una variante con un valor inicial de "0"//
    int resultado =0;
    
    //se da una entrada de texto//
    cout<< "escriba un numero: " ;
    //se guarda el texto ingresado en "numero1"
    cin>> numero1;
    //se da una entrada de otro texto//
    cout<< "escriba otro numero: ";
    //se guarda el texto ingresado en "numero2"
    cin>> numero2;
    //se solicita la entrada de un tercer texto"
    cout<< "escriba su operacion (tenga en cuenta que 1 es suma,2 es resta, 3 es multilicacion y 4 es division): ";
    //se guarda 
    cin >> signo;
    
    switch (signo) {
        
        case 1:
            signo = 1;
            resultado= numero1 + numero2; 
            cout<< "la suma de los dos numeros es : ";
            cout<<resultado; 
            break;
        
        case 2: 
            signo = 2; 
            resultado= numero1 - numero2; 
            cout<< "la resta de sus numeros es : "; 
            cout<<resultado; 
            break;
        
        case 3: 
            signo = 3; 
            resultado= numero1 * numero2; 
            cout<<  "el producto de su multilicacion es : "; 
            cout<<resultado;
            break;
        
        case 4: 
            signo = 4; 
            resultado= numero1 / numero2;
            cout<< "la division de sus numeros es: "; 
            cout<<resultado; 
            break;
       
        
    }
    }

