//
//  main.c
//  calcularEdad
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int edad,anioActual,anioNacimiento;
    printf("inserte el año actual: ");
    scanf("%i",&anioActual);
    printf("inserte el año en que naciste: ");
    scanf("%i",&anioNacimiento);
    edad = anioActual - anioNacimiento;
    printf("su edad es %i \n",edad);
    return 0;
}
