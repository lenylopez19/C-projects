//
//  main.c
//  ordenadoMayorMenor
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
    if (num1 < num2 && num1 < num3) {
        printf("%i\n",num1);
        if (num2 < num3) {
            printf("%i\n",num2);
            printf("%i\n",num3);
        }else{
            printf("%i\n",num3);
            printf("%i\n",num2);
        }
    }else if(num2 < num1 && num2 < num3 ){
        printf("%i\n",num2);
        if (num1 < num3) {
            printf("%i\n",num1);
            printf("%i\n",num3);
        }else{
            printf("%i\n",num3);
            printf("%i\n",num1);
        }
    }else{
        printf("%i\n",num3);
        if (num1 < num2) {
            printf("%i\n",num1);
            printf("%i\n",num2);
        }else{
            printf("%i\n",num2);
            printf("%i\n",num1);
        }
    }
    
    return 0;
}
