//
//  main.c
//  determinarNumerosPositivosNegativos
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    printf("inserte un numero:");
    scanf("%i",&num);
    
    if (num > 0) {
        printf("POSITIVO");
    }else if (num < 0){
        printf("NEGATIVO");
    }else{
        printf("ES CERO");
    }
    
    return 0;
}
