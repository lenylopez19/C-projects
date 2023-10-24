//
//  main.c
//  siDiferenteDe0
//
//  Created by leny Lopez on 22/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float num1,num2,resultado;
    printf("inserte el primer numero: ");
    scanf("%f",&num1);
    printf("inserte el segundo numero: ");
    scanf("%f",&num2);
    
    if (num2 != 0) {
        resultado = num1/num2;
        printf("resultado: %g",resultado);
    }else{
        printf("no se puede divir entre 0");
    }
    return 0;
}
