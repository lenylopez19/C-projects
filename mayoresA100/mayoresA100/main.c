//
//  main.c
//  mayoresA100
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2,num3,num4,num5;
    printf("inserte el num1");
    scanf("%i",&num1);
    printf("inserte el num2");
    scanf("%i",&num2);
    printf("inserte el num3");
    scanf("%i",&num3);
    printf("inserte el num4");
    scanf("%i",&num4);
    printf("inserte el num5");
    scanf("%i",&num5);
    
    if (num1>100) {
        printf("%i ",num1);
    }
    if (num2>100) {
        printf("%i ",num2);
    }
    if (num3>100) {
        printf("%i ",num3);
    }
    if (num4>100) {
        printf("%i ",num4);
    }
    if (num5>100) {
        printf("%i",num5);
    }
    return 0;
}
