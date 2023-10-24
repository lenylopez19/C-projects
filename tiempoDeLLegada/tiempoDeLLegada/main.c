//
//  main.c
//  tiempoDeLLegada
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float distanciaK,velocidad,tiempo;
    printf("inserte la distancia en Kilometros: ");
    scanf("%f",&distanciaK);
    printf("inserte la velocidad promedio en km/h: ");
    scanf("%f",&velocidad);
    
    tiempo = distanciaK / velocidad ;
    
    printf("le tomara %.2g horas en llegar \n",tiempo);
    
    return 0;
}
