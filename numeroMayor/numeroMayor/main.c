//
//  main.c
//  numeroMayor
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, num2;
    printf("inserte el primer numero:");
    scanf("%i",&num1);
    printf("inserte el segundo numero:");
    scanf("%i",&num2);
    
    if (num1 > num2) {
        printf("%i es mayor que %i",num1,num2);
    }else if (num2>num1){
        printf("%i es mayor que %i",num2,num1);
    }else{
        printf("%i y %i son iguales",num1,num2);
    }
    return 0;
}
