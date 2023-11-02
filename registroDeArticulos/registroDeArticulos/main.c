//
//  main.c
//  registroDeArticulos
//
//  Created by leny Lopez on 1/11/23.
//

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    int productos[15];
    int producto = 0;
    int cantidadProducto= 0;
    int maximoVentas[2];
    int i;
    printf("==========================\n");
    printf("   tienda de productos\n");
    printf("==========================\n\n");
    
    for (i=0; i<15; i++) {
        productos[i]=0;
    }
    
    while (true) {
        printf("seleccione el producto: ");
        scanf("%i",&producto);
        if (producto == 0) {
            break;
        }else{
            printf("cantidad del producto: ");
            scanf("%i",&cantidadProducto);
            productos[producto-1]+= cantidadProducto;
        }
    }
    maximoVentas[0]=0;
    printf("productos sin ventas: \n");
    for (i=0; i<15; i++) {
        if (productos[i] > maximoVentas[0]) {
            maximoVentas[0] = productos[i];
            maximoVentas[1]= i+1;
        }
        if (productos[i]==0) {
            printf("%i ",i+1);
        }
    }
    printf("\n producto mas vendido: %i, con un total de %i ventas\n",maximoVentas[1],maximoVentas[0]);
    printf("el articulo #10 vendio: %i\n",productos[9]);
    
    
    return 0;
}
