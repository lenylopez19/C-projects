//
//  main.c
//  cartelAclaratorio
//
//  Created by leny Lopez on 24/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    printf("inserte el primer numero: ");
    scanf("%i",&num1);
    printf("inserte el segundo numero: ");
    scanf("%i",&num2);
    printf("inserte el tercer numero: ");
    scanf("%i",&num3);
    printf("la suma de los dos primeros es mayor que el producto del segundo con el tercero?\n\n");
    if (num1+num2 > num2*num3) {
        printf("si\n");
    }else{
        printf("no");
    }
    return 0;
}
