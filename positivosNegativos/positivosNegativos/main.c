//
//  main.c
//  positivosNegativos
//
//  Created by leny Lopez on 24/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num = 0 ;
    short count = 0;
    for (int i = 0; i <20; i++) {
        printf("%i.inserte un numero: ",i+1);
        scanf("%i",&num);
        if (num > 0) {
            count++;
        }
    }
    printf("numeros positivos: %i",count);
    return 0;
}
