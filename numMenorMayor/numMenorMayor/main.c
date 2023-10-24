//
//  main.c
//  numMenorMayor
//
//  Created by leny Lopez on 20/10/23.
//Hacer un programa para ingresar cinco números distintos y luego mostrar por
//pantalla el mayor y el menor de ellos.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2,num3,num4,num5,menor,mayor;
    printf("inserte el num1: ");
    scanf("%i",&num1);
    printf("inserte el num2: ");
    scanf("%i",&num2);
    printf("inserte el num3: ");
    scanf("%i",&num3);
    printf("inserte el num4: ");
    scanf("%i",&num4);
    printf("inserte el num5: ");
    scanf("%i",&num5);
    
    if (num1 > num2) {
        mayor = num1;
        menor = num2;
    }else{
        mayor = num2;
        menor = num1;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    if (num3 < menor) {
        menor = num3;
    }
    if (num4 > mayor) {
        mayor = num4;
    }
    if (num4 < menor) {
        menor = num4;
    }
    if (num5 > mayor) {
        mayor = num5;
    }
    if (num5 < menor) {
        menor = num5;
    }
    
    printf("\n\nmayor: %i\n",mayor);
    printf("menor: %i\n",menor);
    
    return 0;
}
