//
//  main.c
//  operacionesMatematicas
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2;
    printf("inserte el primer numero");
    scanf("%i",&num1);
    printf("inserte el segundo numero");
    scanf("%i",&num2);
    
    printf("la suma es %i \nLa resta es %i\nLa multiplicacion es %i\nla division es %.2f\n",num1+num2,num1-num2,num1*num2,(float)num1/num2);
    return 0;
}
