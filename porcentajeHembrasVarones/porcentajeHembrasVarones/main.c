//
//  main.c
//  porcentajeHembrasVarones
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int alumnos,hembras,varones;
    float porcientoHembras, porcientoVarones;
    printf("inserte la cantidad de hembras: ");
    scanf("%i",&hembras);
    printf("inserte la cantidad de varones: ");
    scanf("%i",&varones);
    
    alumnos = hembras + varones ;
    porcientoHembras = (hembras * 100) / alumnos;
    porcientoVarones = 100 - porcientoHembras;
    
    printf("%%hembras: %g\n%%Varones: %g \n",porcientoHembras,porcientoVarones);
    
    return 0;
}
