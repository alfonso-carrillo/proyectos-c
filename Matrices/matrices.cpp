//Programa que realiza operaciones con matrices cuadradas.
//Carrillo Paredes Alfonso Eduardo
//Dev-C++ v.511
//Fecha de realizacion: 26-06-2017, 8:00 pm, Fecha de revision: 27-06-2017 y 07-07-2017
//Version: 3.0

#include<iostream>


using namespace std;

int main(){
//declaracion de variables	
int m,n,eleccion,resta,mult,op,op2,op3;
//etiqueta para regresar a esta posicion

//instrucciones para el usuario
top: 
cout<<"\n\n\tEste programa realiza operaciones con matrices cuadradas";
cout<<"\n\n\tOBSERVACIONES:";
cout<<"\n\n\t---> Las matrices son m x n donde m = n por ser matrices cuadradas";
cout<<"\n\n\t---> 'm' representa el numero de filas o renglones,  "<<endl;
cout<<"\t 'n' el numero de columnas de la matriz";
cout<<"\n\n\t---> En este programa la matriz minima es de 2 x 2"<<endl;
cout<<"\ty el maximo de 9 x 9 ";
cout<<"\n\n\t---> Solo se admiten valores enteros";

cout<<"\n\n\n\tElige una operacion de matrices"<<endl;
cout<<"\n\n\t1. Suma";
cout<<"\n\n\t2. Resta";
cout<<"\n\n\t3. Multiplicacion";
cout<<"\n\n\t4. Salir";
cout<<"\n\n\tDigite el numero de la opcion que requieras: ";
cin>>eleccion;
system("cls");
//declaracion de la funcion switch
switch(eleccion){
	//si el usuario presiona el numero uno hace la suma de matrices
	case 1:
//instrucciones para el usuario
  cout<<"\n\n\tEste programa realiza suma de matrices cuadradas"<<endl;
 //etiqueta para regresar a esta opcion al usuario
 back:
 //preguntando el numero de filas y columnas
 cout<<"\n\tIngrese el numero de filas: ";
 
 cin>>m;
 
 cout<<"\n\tIngrese el numero de columnas: ";
 
 cin>>n;
 //if para comprobar que las filas y columnas sean iguales
 if(m==n){
 
//declaracion de las matrices con los valores dados por el usuario
 int mat1[m][n], mat2[m][n];
 
 cout<<"\n\tLlenado de matriz A"<<endl;
 //se inicia un for para que el usuario vaya llenando la matriz A, y guardando los datos
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<"\n\tIngrese numero: ";
   
   cin>>mat1[i][j];
   
  }
 }
 
 cout<<"\n";
 //se inicia un for para que el usuario vaya llenando la matriz B, y guardando los datos
 cout<<"\n\tLlenado de matriz B"<<endl;
 
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<"\n\tIngrese numero: ";
   
   cin>>mat2[i][j];
  }
  
 }
 
 cout<<"\n";
 //for para imprimir como quedan los valores de la matriz A
 cout<<"\nLa matriz A es: "<<endl;
 
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<mat1[i][j]<<" ";
   
  }
  
  cout<<endl;
  
 }
 
 cout<<"\n";
 //for para imprimir como quedan los valores de la matriz B
 cout<<"\nLa matriz B es: "<<endl;
 
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<mat2[i][j]<<" ";
   
  }
  
  cout<<endl;
  
 }
 //for para tener las dos matrices ya llenadas
 cout<<"\n";
 
 cout<<"\nLa matriz C es:"<<endl;
 
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	//suma de las matrices e impresion de su resultado
   cout<<mat1[i][j]+mat2[i][j]<<" ";
   
  }
  
  cout<<endl;
  
 }
 des:
 cout<<"\n\n\t¿Deseas realizar otra operacion?"<<endl;
cout<<"\n\n\t1. Si"<<endl;
cout<<"\n\n\t2. No"<<endl;
cout<<"\n\n\tDigite el numero de la opcion que requieras: ";
 cin>>op;
 
 switch(op){
 	
 	    case 1:
 		goto top;
 		break;
 		
 		case 2:
 		exit(0);
	    break;
	    
	    default: cout<<"\n\n\tERROR NO ES UNA OPCION DISPONIBLE";
		goto des; 
 			
 }
}
//si no es el mismo valor tanto en filas y columnas, imprime el mensaje y manda al usuario a volver a ponerlo
else{
	cout<<"\n\n\tERROR SOLO PUEDE SER EL MISMO NUMERO DE FILAS QUE DE COLUMNAS"<<endl;
	goto back;
}
break;
//si el usuario digita el numero dos hace la resta de matrices
case 2:
	cout<<"\n\n\tEste programa realiza resta de matrices cuadradas"<<endl;
 //etiqueta para regresar al usuario a esta posicion
 back2:
 //pregunta el numero de filas y columnas que requiere el usuario
 cout<<"\n\tIngrese el numero de filas: ";
 
 cin>>m;
 
 cout<<"\n\tIngrese el numero de columnas: ";
 
 cin>>n;
 //if para comprobar que las filas y columnas sean iguales
 if(m==n){
 
//declaracion de matrices
 int mat1[m][n], mat2[m][n];
 
 cout<<"\n\tLlenado de matriz A"<<endl;
 //for para llenar la matriz A
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<"\n\tIngrese numero: ";
   
   cin>>mat1[i][j];
   
  }
 }
 
 cout<<"\n";
 
 cout<<"\n\tLlenado de matriz B"<<endl;
 //for para llenado de la matriz B
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<"\n\tIngrese numero: ";
   
   cin>>mat2[i][j];
  }
  
 }
 
 cout<<"\n";
 
 cout<<"\nLa matriz A es: "<<endl;
 //imprime los valores capturados en la matriz A
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<mat1[i][j]<<" ";
   
  }
  
  cout<<endl;
  
 }
 
 cout<<"\n";
 
 cout<<"\nLa matriz B es: "<<endl;
 //imprime los valores capturados en la matriz B
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<mat2[i][j]<<" ";
   
  }
  
  cout<<endl;
  
 }
 //etiqueta por si la opcion no es correcta
 resta1:
 	//indicaciones al usuario
 cout<<"\n\n\tElige una opcion de resta de matrices"<<endl;
cout<<"\n\n\t1. A-B"<<endl;
cout<<"\n\n\t2. B-A"<<endl;
cout<<"\n\n\tDigite el numero de la opcion que requieras: ";
cin>>resta;
 //funcion switch para darle a escoger al usuario que operacion requiere
 switch(resta){
 //caso 1 la resta de A-B
 case 1:
 cout<<"\n";
 
 cout<<"\nLa matriz A-B es:"<<endl;
 //imprime la matriz C que es la resta de la matriz A y B
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<mat1[i][j]-mat2[i][j]<<" ";
   
  }
  
  cout<<endl;
  
 }
 break;
 //caso 2 la resta B-A
 case 2:
 cout<<"\n";
 
 cout<<"\nLa matriz B-A es:"<<endl;
 //imprime la matriz C que es la resta de la matriz A y B
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<mat2[i][j]-mat1[i][j]<<" ";
   
  }
  
  cout<<endl;
  
 }
 break;
 
 default: cout<<"\n\n\tERROR NO ES UNA OPCION DISPONIBLE"<<endl;
goto resta1;
break;
}

des2:
 cout<<"\n\n\t¿Deseas realizar otra operacion?"<<endl;
cout<<"\n\n\t1. Si"<<endl;
cout<<"\n\n\t2. No"<<endl;
cout<<"\n\n\tDigite el numero de la opcion que requieras: ";
 cin>>op2;
 
 switch(op2){
 	
 	    case 1:
 		goto top;
 		break;
 		
 		case 2:
 		exit(0);
	    break;
	    
	    default: cout<<"\n\n\tERROR NO ES UNA OPCION DISPONIBLE";
		goto des2; 
 			
 }

}
//si las filas y columnas no son iguales imprime un mensaje y manda al usuario a cambiar los datos
else{
	cout<<"\n\n\tERROR SOLO PUEDE SER EL MISMO NUMERO DE FILAS QUE DE COLUMNAS"<<endl;
	goto back2;
}
break;

case 3:

cout<<"\n\n\tEste programa realiza multiplicacion de matrices cuadradas"<<endl;
 //etiqueta para regresar a esta opcion al usuario
 back3:
 //preguntando el numero de filas y columnas
 cout<<"\n\tIngrese el numero de filas: ";
 
 cin>>m;
 
 cout<<"\n\tIngrese el numero de columnas: ";
 
 cin>>n;
 //if para comprobar que las filas y columnas sean iguales
 if(m==n){
 
//declaracion de las matrices con los valores dados por el usuario
 int mat1[m][n], mat2[m][n], c[m][n];
 
 cout<<"\n\tLlenado de matriz A"<<endl;
 //se inicia un for para que el usuario vaya llenando la matriz A, y guardando los datos
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<"\n\tIngrese numero: ";
   
   cin>>mat1[i][j];
   
  }
 }
 
 cout<<"\n";
 //se inicia un for para que el usuario vaya llenando la matriz B, y guardando los datos
 cout<<"\n\tLlenado de matriz B"<<endl;
 
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<"\n\tIngrese numero: ";
   
   cin>>mat2[i][j];
  }
  
 }
 
 cout<<"\n";
 //for para imprimir como quedan los valores de la matriz A
 cout<<"\nLa matriz A es: "<<endl;
 
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<mat1[i][j]<<" ";
   
  }
  
  cout<<endl;
  
 }
 
 cout<<"\n";
 //for para imprimir como quedan los valores de la matriz B
 cout<<"\nLa matriz B es: "<<endl;
 
 for(int i=0;i<m;i++){
 	
  for(int j=0;j<n;j++){
  	
   cout<<mat2[i][j]<<" ";
   
  }
  
  cout<<endl;
  
 }
//etiqueta para regresar al usuario a esta posicion
opc: 
//instrucciones para que el usuario elija una operacion
cout<<"\n\n\tElige una opcion de multiplicacion"<<endl;
cout<<"\n\n\t1. A*B"<<endl;
cout<<"\n\n\t2. B*A"<<endl;
cout<<"\n\n\tDigite el numero de la opcion que requieras: ";
cin>>mult;

switch(mult){

case 1:
//for para llenar la matriz C que hara la operacion
for(int i=0; i<m; ++i)
  for(int j=0; j<n; ++j)
    c[i][j] = 0;

//for que hara la operacion de multiplicacion
for(int i=0; i<m; ++i)
  for(int j=0; j<n; ++j)
   for(int z=0; z<n; ++z)
     c[i][j] += mat1[i][z] * mat2[z][j];
                
 //for para imprimir los valores dados por la multiplicacion A*B               
cout<<"\n";                
cout<<"\nLa multiplicacion de A*B es: "<<endl;
  for(int i=0; i<m; ++i)
  {
    for(int j=0; j<n; ++j)
    {
      cout<<c[i][j]<<" ";
    }
     cout<<endl;
    }
    
    break;
    
case 2:

//for para llenar la matriz C que hara la operacion	
for(int i=0; i<m; ++i)
  for(int j=0; j<n; ++j)
    c[i][j] = 0;

//for que hara la operacion de multiplicacion
for(int i=0; i<m; ++i)
  for(int j=0; j<n; ++j)
   for(int z=0; z<n; ++z)
     c[i][j] += mat2[i][z] * mat1[z][j];
                
				
 //for para imprimir los valores dados por la multiplicacion B*A            
cout<<"\n";                
cout<<"\nLa multiplicacion de B*A es: "<<endl;
  for(int i=0; i<m; ++i)
  {
    for(int j=0; j<n; ++j)
    {
      cout<<c[i][j]<<" ";
    }
     cout<<endl;
    }
    
    break;


default: 
cout<<"\n\n\tERROR NO ES UNA OPCION DISPONIBLE"<<endl;
goto opc;
break; 	

}

des3:
 cout<<"\n\n\t¿Deseas realizar otra operacion?"<<endl;
cout<<"\n\n\t1. Si"<<endl;
cout<<"\n\n\t2. No"<<endl;
cout<<"\n\n\tDigite el numero de la opcion que requieras: ";
 cin>>op3;
 
 switch(op3){
 	
 	    case 1:
 		goto top;
 		break;
 		
 		case 2:
 		exit(0);
	    break;
	    
	    default: cout<<"\n\n\tERROR NO ES UNA OPCION DISPONIBLE";
		goto des3; 
 			
 }

 }
 
//si no es el mismo valor tanto en filas y columnas, imprime el mensaje y manda al usuario a volver a ponerlo
else{
	cout<<"\n\n\tERROR SOLO PUEDE SER EL MISMO NUMERO DE FILAS QUE DE COLUMNAS"<<endl;
	goto back3;
}
break;

case 4:
	
	exit(0);
	break;

//si el usuario presiona otro valor diferente a uno o dos, en las opciones de suma y resta, imprime un mensaje y regresa al usuario a que le de otra opcion
default: cout<<"\n\n\tERROR NO ES UNA OPCION DISPONIBLE"<<endl;
goto top;
break;	
 
}
 return 0; 

}

