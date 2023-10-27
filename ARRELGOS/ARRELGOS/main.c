//
//  main.c
//  ARRELGOS
//
//  Created by leny Lopez on 24/10/23.
//
/*
 
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float promedio = 0;
    int mayor = 0;
    int menor = 0;
    int i = 0;
    float salarios[5];
    for ( i = 0; i <5; i++) {
        printf("inserte el salario del trabajado %i : ",i+1);
        scanf("%f",&salarios[i]);
    }
    for (i = 0; i <5; i++) {
        promedio += salarios[i];
    }
    promedio /= 5;
    
    for (i=0; i<5; i++) {
        if (salarios[i] > promedio) {
            mayor++;
        }else if (salarios[i]<promedio){
            menor++;
        }
    }
    printf("promedio: %g\n",promedio);
    printf("mas alto que el promedio: %i\n",mayor);
    printf("mas bajo que el promedio: %i\n",menor);
    
    
    
    
    return 0;
}
