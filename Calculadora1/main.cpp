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
    //se solicita la entrada de un tercer texto"//
    cout<< "escriba su operacion (tenga en cuenta que 1 es suma,2 es resta, 3 es multilicacion y 4 es division): ";
    //se guarda el texto ingresado llamado "operación" en la variante signo//
    cin >> signo;
    
    switch (signo) { //se aabre seccion de "casos"//
      
        //se introduce el primer caso en el que, sí el dato ingresado es "1" se sumara el dato "numero1" y el dato "numero2"//
        case 1:
            signo = 1;
            resultado= numero1 + numero2; 
            cout<< "la suma de los dos numeros es : ";
          
          //se muestra en pantalla "resultado"// 
            cout<<resultado;
          
          //se da la indicacion de cerrar o dar por terminado el código//
            break;

       //se introduce el segundo caso en el que, sí el dato ingresado es "2" se restará el dato "numero1" del dato "numero2"//
        case 2: 
            signo = 2; 
            resultado= numero1 - numero2; 
            cout<< "la resta de sus numeros es : ";
          
            //se muestra en pantalla "resultado"//
            cout<<resultado; 
          
            //se da la indicacion de cerrar o dar por terminado el código//
            break;

      
        //se introduce el tercer caso en el que, sí el dato ingresado es "3" se multiplicará el dato "numero1" y el dato "numero2"//
        case 3: 
            signo = 3; 
            resultado= numero1 * numero2; 
            cout<<  "el producto de su multilicacion es : "; 
          
           //se muestra en pantalla "resultado"//
            cout<<resultado;
          
          //se da la indicacion de cerrar o dar por terminado el código//
            break;

      //se introduce el cuarto caso en el que, sí el dato ingresado es "4" se dividirá el dato "numero1" al dato "numero2"//
        case 4: 
            signo = 4; 
            resultado= numero1 / numero2;
            cout<< "la division de sus numeros es: "; 
          
           //se muestra en pantalla "resultado"//
            cout<<resultado; 
          
          //se da la indicacion de cerrar o dar por terminado el código//
            break;
       
    return 0; 
    }
    }

