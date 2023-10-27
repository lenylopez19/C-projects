//
//  main.c
//  calsificacionDeTriangulos
//
//  Created by leny Lopez on 22/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ladoA,ladoB,ladoC;
    printf("inserte el lado A: ");
    scanf("%i",&ladoA);
    printf("inserte el lado B: ");
    scanf("%i",&ladoB);
    printf("inserte el lado C: ");
    scanf("%i",&ladoC);
    
    if ((ladoA != ladoB) && (ladoB != ladoC) && (ladoA != ladoC)) {
        printf("\nEscaleno\n");
    }else if (ladoA == ladoB && ladoB == ladoC && ladoA == ladoC){
        printf("\nequilátero\n");
    }else{
        printf("\nisoceles\n");
    }
    
    return 0;
}
