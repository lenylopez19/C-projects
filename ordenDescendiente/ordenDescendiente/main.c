//
//  main.c
//  ordenDescendiente
//
//  Created by leny Lopez on 22/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2,num3,num4;
    printf("insterte el primer numero: ");
    scanf("%i",&num1);
    printf("insterte el segundo numero: ");
    scanf("%i",&num2);
    printf("insterte el tercer numero: ");
    scanf("%i",&num3);
    printf("insterte el cuarto numero: ");
    scanf("%i",&num4);

    if (num1 > num2 && num2 > num3 && num3 > num4) {
        printf("se encunetra de forma decreciente.");
    }else{
        printf("no se encuentra de forma decreciente");
    }
    
    return 0;
}
