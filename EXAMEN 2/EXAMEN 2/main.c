//
//  main.c
//  EXAMEN 2
//
//  Created by leny Lopez on 9/11/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float estacion1[7];
    float estacion2[7];
    float estacion3[7];
    float estacion4[7];
    float precioCosto[7];
    float precioVenta[7];
    float potenciaMedia[7];
    int diaMayorPotencia=0;
    float potenciaMediaMayor=0;
    float potenciaMediaGlobal=0;
    float consumoDelDia=0;
    float gananciaDiaria[7];
    float gananciaTotal=0;
    int DiasPotenciaMayorProm=0;
    int i;
    for (i=0; i<7; i++) {
        printf("====================================\n");
        printf("            Dia %i\n",i+1);
        printf("====================================\n");
        printf("Precio de coste del megavatio: ");
        scanf("%f",&precioCosto[i]);
        printf("Precio de venta del megavatio: ");
        scanf("%f",&precioVenta[i]);
        printf("\npotencia suministrada del dia\n");
        printf("estacion 1: ");
        scanf("%f",&estacion1[i]);
        printf("estacion 2: ");
        scanf("%f",&estacion2[i]);
        printf("estacion 3: ");
        scanf("%f",&estacion3[i]);
        printf("estacion 4: ");
        scanf("%f",&estacion4[i]);
    }
    printf("\n============RESULTADO===========\n");
    for (i=0; i<7; i++) {
        consumoDelDia = estacion1[i]+estacion2[i]+estacion3[i]+estacion4[i];
        potenciaMedia[i]= consumoDelDia/4;
        potenciaMediaGlobal += consumoDelDia;
        if(potenciaMedia[i]>potenciaMediaMayor) {
            potenciaMediaMayor = potenciaMedia[i];
            diaMayorPotencia = i+1;
        }
        printf("\nDia %i Potencia media: %.2f\n",i+1,potenciaMedia[i]);
    }
    potenciaMediaGlobal /= 28;
    printf("Dia de mayor potencia : %i , potencia entregada: %.2f\n",diaMayorPotencia,potenciaMediaMayor);
    printf("Potencia Media del periodo: %.2f\n\n",potenciaMediaGlobal);
    
    for (i=0; i<7; i++) {
        consumoDelDia = estacion1[i]+estacion2[i]+estacion3[i]+estacion4[i];
        if (consumoDelDia > potenciaMediaGlobal) {
            DiasPotenciaMayorProm++;
        }
        gananciaDiaria[i] = (consumoDelDia*precioVenta[i]) - (consumoDelDia*precioCosto[i]);
        gananciaTotal += gananciaDiaria[i];
    }
    
    for (i=0; i<7; i++) {
        printf("Ganancias del dia %i: %.2f\n",i+1,gananciaDiaria[i]);
    }
    printf("\nGanacia total: %.2f",gananciaTotal);
    
    return 0;
}
