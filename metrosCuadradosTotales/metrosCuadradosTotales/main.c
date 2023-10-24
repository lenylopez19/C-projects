//
//  main.c
//  metrosCuadradosTotales
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float metrosCuadradosTotales,metrosCuadradosCubiertos,porcentajeCubierto,porcentajeDescubierto;
    printf("inserte los metros cuadrados totales del terreno:");
    scanf("%f",&metrosCuadradosTotales);
    printf("inserte los metros cuadrados cubiertos:");
    scanf("%f",&metrosCuadradosCubiertos);
    
    porcentajeCubierto = (metrosCuadradosCubiertos * 100)/metrosCuadradosTotales;
    porcentajeDescubierto = 100 - porcentajeCubierto;

    printf("Porcentaje cubierto : %g \n",porcentajeCubierto);
    printf("Porcentaje Descubierto: %g \n",porcentajeDescubierto);
    return 0;
}
