//
//  main.c
//  arreglos
//
//  Created by leny Lopez on 26/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[50];
    int i;
    int cont= 0;
    for (i=0; i<50; i++) {
        printf("inserte el numero %i de 50: ",i+1);
        scanf("%i",&arr[i]);
    }
    
    for (i = 0; i<50; i++) {
        cont += arr[i];
    }
    printf("la suma es: %i",cont);
    return 0;
}
