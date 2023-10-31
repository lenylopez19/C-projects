//
//  main.c
//  CalcularPromedioYmayorQuePromedio
//
//  Created by leny Lopez on 31/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int notas[5];
    int promedio=0;
    int i;
    for (i=0; i<5; i++) {
        printf("inserte el valor %i/5: ",i+1);
        scanf("%i",&notas[i]);
    }
    printf("\n");
    for (i=0; i<5; i++) {
        promedio += notas[i];
    }
    promedio /= 5;
    printf("promedio: %i\n", promedio);
    printf("notas mayores al promedio: \n");
    
    for (i=0; i<5; i++) {
        if (promedio < notas[i]) {
            printf("%i",notas[i]);
            if (i<4) {
                printf("-");
            }
        }
    }
    printf("\n");
    
    
    return 0;
}
