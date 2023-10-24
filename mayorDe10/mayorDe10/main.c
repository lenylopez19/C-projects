//
//  main.c
//  mayorDe10
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    printf("inserte un numero: ");
    scanf("%i",&num);
    if (num > 10) {
        printf("es mayor que 10");
    }else{
        printf("es menor que 10");
    }
    return 0;
}
