//
//  main.c
//  FORnumMayor
//
//  Created by leny Lopez on 24/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num = 0;
    int mayor = 0;
    for (int i = 0; i<10; i++) {
        printf("%i.inserte el numero:",i+1);
        scanf("%i",&num);
        if (num > mayor) {
            mayor = num;
        }
    }
    printf("\n%i\n",mayor);
    return 0;
}
