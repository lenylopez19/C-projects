//
//  main.c
//  primeraClase
//
//  Created by leny Lopez on 12/10/23.
//

//para escribir scanf()
//para imprimir printf()
//enteros %i
//doubles %d
//float %f
//char %c
//scanf("%i",& numero);

/*
 
 estructuras de funciones o subprocesos
 
 tipo_dato Nombre_de_Funcion (tipo_dato arg_1,tipo_dato arg2){
    
    return valor;
 }
 
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    printf("Inserte el numero: ");
    scanf("%i",& num);
    
    if (num%2==0) {
        printf("el numero es par \n");
    }else{
        printf("el numero NO es par \n");
    }

    return 0;
}

