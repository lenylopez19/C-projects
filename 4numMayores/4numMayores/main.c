//
//  main.c
//  4numMayores
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2,num3,num4,mayor;
    printf("inserte el num1");
    scanf("%i",&num1);
    printf("inserte el num2");
    scanf("%i",&num2);
    printf("inserte el num3");
    scanf("%i",&num3);
    printf("inserte el num4");
    scanf("%i",&num4);
    
    if (num1>num2) {
        mayor = num1;
    }else{
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    if (num4 > mayor) {
        mayor = num4;
    }
    printf("%i",mayor);
}
