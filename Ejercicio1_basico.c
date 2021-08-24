#include <stdio.h>

int main (){

//iniciamos con la estructura básica del main retornando 0

int lectura;

//declaramos una variable del tipo entero llamada lectura que posteriormente la usaremos para leer el valor ingresado por el usuario

printf("Bienvenido al menu de opciones de este programa\n\n");

printf("Te presento las siguientes opciones que ofrece el menu, por favor selecciona una:\n\n");

printf("Opcion 1 : Suma de dos numeros\n" "Opcion 2 : Resta de dos numeros\n" "Opcion 3 : Multiplicacion de dos numeros\n" "Opcion 4 : Division de dos numeros\n" "Opcion 5 : Salir del menu\n");

scanf("%d",&lectura);

//leemos el valor digitalizado por el usuario y lo guardamos en la variable lectura

printf("\n");

//dependiendo del valor introducido por el usurio se mostrara un mensaje diferente o terminara cuando se digitaliza un valor contrario a las opciones de los mnensajes

if(lectura == 1 ){

printf("Has seleccionado la opcion: 1 correspondinete a la suma de dos numeros");


}else{

 if(lectura == 2 ){


 printf("Has seleccionado la opcion: 2 correspondiente a la resta de dos numeros");



 } else{

     if(lectura == 3){

       printf("Has seleccionado la opcion: 3 correspondiente a la multiplicacion de dos numeros");

     }else{

         if(lectura== 4) {


        printf("Has seleccionado la opcion: 4 correspondiente a la division de dos numeros");

         }else{




         }


     }


 }



}



return 0;
}


