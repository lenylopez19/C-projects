//
//  main.c
//  same4number
//
//  Created by leny Lopez on 24/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2,num3,num4;
    printf("inserte los 4 numeros:");
    scanf("%i",&num1);
    scanf("%i",&num2);
    scanf("%i",&num3);
    scanf("%i",&num4);
    if (num1==num2 && num1 ==num2 && num1 == num3 && num1 == num4) {
        printf("todos los numeros son iguales\n");
    }
    return 0;
}
