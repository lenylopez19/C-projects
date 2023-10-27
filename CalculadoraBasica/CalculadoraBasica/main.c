//
//  main.c
//  CalculadoraBasica
//
//  Created by leny Lopez on 13/10/23.
//

#include <stdio.h>

float suma(float n1, float n2){
    return n1+n2;
}
float resta(float n1, float n2){
    return n1-n2;
}
float mult(float n1, float n2){
    return n1*n2;
}
float divi(float n1, float n2){
    if (n2 != 0) {
        return n1/n2;
    }else{
        printf("no se puede dividir por 0");
        return 0;
    }
    return n1/n2;
}


int main(int argc, const char * argv[]) {
    short opt;
    float num1,num2;
    printf("==========================\n        Calculadora\n==========================\n\n");
    printf("1. Sumar    2. Restar\n3. Dividir  4. Multiplicar\n\n");
    do {
        printf("opcion: ");
        scanf("%hd",&opt);
    } while (opt < 1 || opt >4);
    
    printf("\nInserte el primer numero: ");
    scanf("%f",& num1);
    printf("\nInserte el segundo numero: ");
    scanf("%f",& num2);
    
    switch (opt) {
        case 1:
            printf("la suma de %g + %g = %g \n",num1,num2,suma(num1,num2));
            break;
        case 2:
            printf("la resta de %g - %g = %g \n",num1,num2,resta(num1,num2));
            break;
        case 3:
            printf("la division de %g entre %g = %g \n",num1,num2,divi(num1, num2));
            break;
        case 4:
            printf("la multiplicacion de %g por %g = %g \n",num1,num2,mult(num1, num2));
            break;
    }
    
    return 0;
}


