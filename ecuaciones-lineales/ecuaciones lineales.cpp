//ecuacion de segundo grado por el metodo de sustitucion
//Carrillo Paredes Alfonso Eduardo
//Realizado en Dev C++ 5.11
//fecha de realizacion: 06-06-2017, Fecha de revision: 09-06-17

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>


using namespace std;

int main()
{
	//declaracion de todas las variables utilizadas
	double a1,b1,c1,a2,b2,c2,x,y,res1,res2,y1,y2,x1,x2;

	cout <<"\n\t Programa que calcula los valores de x,y en un sistema de ecuaciones" << endl;
	cout << "\t lineales de 2x2. con el metodo se sustitucion" <<endl;	
	cout << "\n\t\t a1x + b1y + c1" <<endl;
	cout << "\n\t\t a2x + b2y + c2" <<endl;
	cout << "\n\t ACLARACIONES:" <<endl;
	cout << "\n\t Solo c1 o c2 pueden ser cero" << endl<<endl<<endl;
	cout << "\n\t Todas las demas variables tienen que tomar un valor diferente de cero" << endl<<endl<<endl;
	//etiqueta para vincular con la funcion goto
	error:
	cout << "\nDame el valor de: (a1)" << endl;
	cin >> a1;
	
	cout << "\nDame el valor de: (b1)" << endl;
	cin >> b1;
	
	cout << "\nDame el valor de: (c1)" << endl;
	cin >> c1;
	//si el usuario da un valor igual a cero en a1 o b1 lo regresa a darle otro valor nuevo
	if(a1==0 || b1==0){
		cout << "\n\t ERROR a1 o b1 NO PUEDEN SER IGUAL A CERO" <<endl;cout<<endl;
                       cout <<endl<<endl<<endl;
                       goto error;
	}
	//etiqueta para vincular con la funcion goto
    error2:
    cout << "\nDame el valor de: (a2)" << endl;  
	cin >> a2;
	
	cout << "\nDame el valor de: (b2)" << endl;
	cin >> b2;
	
	cout << "\nDame el valor de: (c2)" << endl;
	cin >> c2;
	//si el usuario da un valor igual a cero en a2 o b2 lo regresa a darle otro valor nuevo
	if(a2==0 || b2==0){
		cout << "\n\t ERROR a2 o b2 NO PUEDEN SER IGUAL A CERO" <<endl;cout<<endl;
                       cout <<endl<<endl<<endl;
                       goto error2;
	} 	
	//si el usuario da dos veces el valor 0 para c1 y c2 lo regresa al principio del programa
	if(c1==0 && c2==0){
		cout << "\n\t ERROR c1 y c2 NO PUEDEN SER CERO AL MISMO TIEMPO" <<endl;cout<<endl;
                       cout <<endl<<endl<<endl;
                       goto error;
	}
	//realizacion de despeje de 'x' y al mismo tiempo sacando sus resultados
	res1=(a2*c1)/a1;
	cout << "\n\tResultado division uno:" << res1 <<endl;
    
    res2=(a2*b1)/a1;
    cout << "\n\tResultado division dos:" << res2 <<endl;
    //con los resultados de las anteriores divisiones hace resta y suma
	y1=c2-res1;
    cout << "\n\tResultado y1:" << y1 <<endl;
    y2=res2+b2;
    cout << "\n\tResultado y2:" << y2 <<endl;
    //resulta de dividir con los anteriores resultados
	y=y1/y2;
    
    //hace una division y despues el resultado lo multiplica por el resultado de y
    x1=(b1/a1)*y;
    cout << "\n\tResultado x1:" << x1 <<endl;
    x2=(c1/a1);
    cout << "\n\tResultado x2:" << x2 <<endl;
    //suma los dos resultados anteriores para dar el valor de x
	x=x2+x1;
    
	cout << "\n\n\tEl valor de x es = " << x <<endl;
    cout << "\n\n\tEl valor de y es = " << y <<endl;
    
    
    
	
	
	cout << endl;cout << endl;cout << endl;system("pause");
	
	
}
