//
//  main.c
//  4numMenor
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2,num3,num4,menor;
    printf("inserte el num1: ");
    scanf("%i",&num1);
    printf("inserte el num2: ");
    scanf("%i",&num2);
    printf("inserte el num3: ");
    scanf("%i",&num3);
    printf("inserte el num4: ");
    scanf("%i",&num4);
    
    if (num1 < num2) {
        menor = num1;
    }else{
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    if (num4 < menor) {
        menor = num4;
    }
    
    printf("menor: %i",menor);
    
    return 0;
}
