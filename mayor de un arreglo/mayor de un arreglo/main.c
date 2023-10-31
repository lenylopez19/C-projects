//
//  main.c
//  mayor de un arreglo
//
//  Created by leny Lopez on 26/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[10];
    int mayor[2];
    int i;
    mayor[0]=0;
    mayor[1]=0;
    for (i = 0; i<10; i++) {
        printf("inserte un numero %i/10: ",i+1);
        scanf("%i",&arr[i]);
    }
    for (i =0; i<10; i++) {
        if (arr[i] > mayor[0] ) {
            mayor[0]=arr[i];
            mayor[1]=i;
        }
    }
    printf("el numero mayor es: %i\nEn el indice: %i\n",mayor[0],mayor[1]);
    
    return 0;
}
