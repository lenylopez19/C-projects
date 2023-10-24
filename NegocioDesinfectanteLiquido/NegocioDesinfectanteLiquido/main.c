//
//  main.c
//  NegocioDesinfectanteLiquido
//
//  Created by leny Lopez on 22/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int litrosVenta,descuento;
    float total,totalDescuento,importe;
    printf("inserte la cantidad de litros vendidos: ");
    scanf("%i",&litrosVenta);
    printf("inserte el total de la venta: ");
    scanf("%f",&importe);

    if (litrosVenta > 500) {
        descuento = 25;
    }else if(litrosVenta >300){
        descuento = 15;
    }else if(litrosVenta > 100){
        descuento = 10;
    }else{
        descuento = 0;
    }
   
   
    totalDescuento = importe * (descuento/100.0);
    
    total = importe - totalDescuento;
    printf("\nSu compra tiene un %i%% de descuento\n\n",descuento);
    printf("importe: %g\n",importe);
    printf("descuento: %g\n",totalDescuento);
    printf("total:%g\n",total);
    
    return 0;
}

