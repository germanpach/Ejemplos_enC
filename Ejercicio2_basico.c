#include <stdio.h>

int main (){

//iniciamos con la estructura basica de nuestyro porgrama retornando 0

double a= 7;

//declaramos la primer variable que es un entero pero lo declaramos como double para poder interactuar con el flotante

double b = 3.1416;

//declaramos la segunda variable que es un flotante pero lo declaramos double para poder interactuar el entero

double resultado_suma=a+b;

double resultado_resta=a-b;

double resultado_multiplicacion=a*b;

double resultado_division=a/b;

//previamente definimos las operaciones tipo double


printf("En este programa realizaremos operaciones aritmeticas basicas con un numero entero (7) y uno flotante (3.1416)\n");

printf ("La suma de los dos numeros es : ");

printf("%lf\n",resultado_suma);

printf ("La resta de los dos numeros es : ");

printf("%lf\n",resultado_resta);

printf ("La multiplicacion de los dos numeros es : ");

printf("%lf\n",resultado_multiplicacion);

printf ("La division de los dos numeros es : ");

printf("%lf\n",resultado_division);


//mostramos la informacion dependiendo del tipo de operacion



return 0;
}
