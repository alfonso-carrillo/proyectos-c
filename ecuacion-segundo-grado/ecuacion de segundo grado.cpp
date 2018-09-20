//Programa que calcula raices de una ecuacion de segundo grado
//Carrillo Paredes Alfonso Eduardo
//Dev-C++ v.511
//Fecha de realizacion: 31-05-2017, 8:17pm, Fecha de revision: 02-06-17

#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;


int main(void) {
   double a, b, c, res1, res2, arrel, discriminante, x, y;
   
   
   cout <<"\n\n\t\ Este programa calcula las raices de una ecuacion de segundo grado." << endl;
   
   cout << "\n\t\ Utiliza la formula general: a(x^2) + bx + c = 0"<<endl;
   cout << " \n\nOBSERVACIONES:" << endl<<endl<<endl;
   cout << " A) Dame el valor de a,b y c" << endl<<endl<<endl;
   cout << " B) El valor de 'a' no puede ser cero, ya que seria una ecuacion de primer grado" << endl<<endl<<endl;
   cout << " C) Si el valor de 'c' es mayor a 'b' es probable que los resultados sean raices imaginarias" << endl<<endl<<endl;
   cout << " D) Si el valor de 'b' es mayor a 'c' es probable que los resultados sean raices reales" << endl<<endl<<endl;
   error: //etiqueta vinculada con goto
   cout << "Dame el valor de: (a)" << endl;
   cin >> a;
   
   if (a==0) { 
   //if para comprobar que el usuario no de valor de 0 a la variable a
                       cout << "ERROR EL VALOR DE a NO PUEDE SER CERO" <<endl;cout<<endl;
                       cout <<endl<<endl<<endl;
                       goto error; //se dirije a la etiqueta error para que el usuario vuelva a introducir los valores
                       }
                       
   cout << "Dame el valor de: (b)" << endl;
   cin >> b;

   
   cout << "Dame el valor de: (c): " << endl;
   cin >> c;
   
   
    discriminante = (pow(b,2) - 4*a*c);
    if (discriminante==0) {
    	//si el resultado de la operacion es igual a cero hace la siguiente operacion
                              res1=(-b)/(2*a);
                              cout << endl;cout << endl;cout << endl;
                              cout << "Se trata de una ecuacion de segundo grado de ambas raices" <<endl;
                              cout << "x = " <<res1 <<endl;
                              }
                              
        else {
        
        arrel=sqrt(sqrt(discriminante*discriminante));
        
		if (discriminante>0){
			//caso contrario si el resultado de la operacion es mayor a cero seguira con la ecuacion de segundo grado
                             res1= (b*(-1) - arrel)/(2*a);
                             res2= (b*(-1) + arrel)/(2*a);
                             cout << endl;cout << endl;cout << endl;
                             cout << "El resultado son dos raices reales:" << endl;
                             cout << "x (1) = "<< res1 <<endl;
                             cout << "x (2) = "<< res2 <<endl;
                            }
        
		else{
			//si la variable es menor a cero continuara a hacer otra operacion para sacar la raiz compleja
             x=-b/(2*a);
             y=arrel/(2*a);
             cout << endl;cout << endl;cout << endl;
             cout << "El resultado son dos raices complejas o imaginarias:"<<endl;
             cout << "Raiz 1 = "<< x << " + " << y << "i"<<endl;
             cout << "Raiz 2 = "<< x << " - " << y << "i"<<endl;
             }
             }
             
   cout << endl;cout << endl;cout << endl;system("pause");
}
