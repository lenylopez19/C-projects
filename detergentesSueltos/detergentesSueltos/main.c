//
//  main.c
//  detergentesSueltos
//
//  Created by leny Lopez on 22/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float subtotal,total,descuentoTotal,litrosVendidos,precioPorLitro,descuento;
    short metodoPago;
    printf("inserte la cantidad de litros vendidos:");
    scanf("%f",&litrosVendidos);
    printf("pagara en efectivo? 0.no 1.si : ");
    scanf("%hi",&metodoPago);
    descuento = 0;
    if (litrosVendidos > 500) {
        precioPorLitro = 10;
    }else if(litrosVendidos > 200){
        precioPorLitro = 15;
    }else if(litrosVendidos > 50){
        precioPorLitro = 20;
    }else{
        precioPorLitro = 25;
    }
    if (metodoPago==1) {
        descuento = 10;
    }
    subtotal = litrosVendidos * precioPorLitro;
    descuentoTotal = subtotal*(descuento/100);
    total = subtotal - descuentoTotal;
    printf("\nSubtotal: %g\n",subtotal);
    printf("descuento: %g\n",descuentoTotal);
    printf("total: %g\n",total);
    return 0;
}
