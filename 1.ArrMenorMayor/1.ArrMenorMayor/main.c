//
//  main.c
//  1.ArrMenorMayor
//
//  Created by leny Lopez on 28/10/23.
//

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    int arr[10];
    bool asc = true;
    int i;
    for (i = 0; i<10; i++) {
        printf("inserte los valores(%i/10): ",i+1);
        scanf("%i",&arr[i]);
    }
    for (i=0; i<9; i++) {
        if (arr[i]>arr[i+1]) {
            asc = false;
        }
        if (!asc) {
            break;
        }
    }
    
    if (asc) {
        printf("\nValido: Ordenados de menor a mayor\n\n");
    }else{
        printf("\nInvalido: NO ordenados de menor a mayor\n\n");
    }
    return 0;
}
