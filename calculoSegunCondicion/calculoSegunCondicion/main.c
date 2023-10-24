//
//  main.c
//  calculoSegunCondicion
//
//  Created by leny Lopez on 22/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, num2, resultado;
    printf("inserte el primer numero: ");
    scanf("%i",&num1);
    printf("inserte el segundo numero: ");
    scanf("%i",&num2);
    
    if (num1 > num2) {
        resultado = num1 -num2;
    }else if(num1 < num2){
        resultado = num1 * num2;
    }else{
        resultado = num1+num2;
    }
    printf("resultado: %i",resultado);
    
    return 0;
}
