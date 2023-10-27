//
//  main.c
//  arr2
//
//  Created by leny Lopez on 26/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr1[5];
    int arr2[5];
    int result[5];
    int i;
    for (i=0; i<5; i++) {
        printf("inserte los valores del primer arreglo %i/5: ",i+1);
        scanf("%i",&arr1[i]);
        printf("inserte los valores del segundo arreglo %i/5: ",i+1);
        scanf("%i",&arr2[i]);
        result[i] = arr1[i]+arr2[i];
    }

    printf("el resultado de los arreglos: \n");
    printf("[");
    for (i=0; i<5; i++) {
        
        printf(" %i",result[i]);
        if (i<4) {
            printf(",");
        }
    }
    printf("]");
    printf("\n");
    return 0;
}
