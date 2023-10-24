//
//  main.c
//  minutosHoras
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int tiempo,horas;
    printf("inserte el timepo en minutos: ");
    scanf("%i",&tiempo);
    horas = 0;
    
    while (tiempo >= 60) {
        horas++;
        tiempo = tiempo - 60;
    }

    if (horas >0) {
        printf("%i hora %i minutos\n",horas,tiempo);
    }else{
        printf("%i minutos\n",tiempo);
    }
    
    return 0;
}
