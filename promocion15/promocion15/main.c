//
//  main.c
//  promocion15
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float promocion,totalCompra,descuento,totalFinal;
    promocion = 15;
    printf("inserte el total de la compra: ");
    scanf("%f",&totalCompra);
    descuento = (promocion/100) * totalCompra;
    totalFinal = totalCompra - descuento;
    printf("Subtotal: %g\n",totalCompra);
    printf("Descuento: %g\n",descuento);
    printf("Total: %g\n",totalFinal);

    return 0;
}
