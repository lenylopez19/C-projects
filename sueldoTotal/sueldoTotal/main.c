//
//  main.c
//  sueldoTotal
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float sueldoFijo,comision,totalFacturado,sueldoFinal;
    sueldoFijo = 15000;
    comision = 5;
    
    printf("inserte el total facturado : ");
    scanf("%f",&totalFacturado);
    
    sueldoFinal = sueldoFijo + ((comision/100)*totalFacturado);
    
    printf("sueldo total : %g \n",sueldoFinal);
    
    return 0;
}
