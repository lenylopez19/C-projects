//
//  main.c
//  2.busquedaPorPosicion
//
//  Created by leny Lopez on 28/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[10];
    int i;
    int search = 0;
    for (i=0; i<10; i++) {
        printf("inserte 10 numeros enteros (%i/10): ",i+1);
        scanf("%i",&arr[i]);
    }
    printf("inserte el Valor a buscar: ");
    scanf("%i",&search);
    
    for (i=0; i<10; i++) {
        if (arr[i]==search) {
            printf("El numero %i se encuentra en la posicion %i\n",search,i+1);
        }
    }
    
    return 0;
}
