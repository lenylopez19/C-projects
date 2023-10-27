//
//  main.c
//  tribuna
//
//  Created by leny Lopez on 12/10/23.
//



#include <stdio.h>

int main(int argc, const char * argv[]) {
    int numeroBoleto;
    int numeroColumna;
    int numeroFila;
    printf("Inserte el numero del boleto: ");
    scanf("%i",&numeroBoleto);
    
    numeroFila = numeroBoleto/500;
    numeroColumna = numeroBoleto - (500*numeroFila);
    
    if (numeroColumna == 0 ) {
        numeroColumna = 500;
    }else{
        numeroFila = numeroFila + 1;
    }
    
    printf("Su ubicacion es \n");
    printf("fila: %i columna: %i\n", numeroFila,numeroColumna);
   
    return 0;
}
