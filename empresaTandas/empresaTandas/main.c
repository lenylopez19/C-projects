//
//  main.c
//  empresaTandas
//
//  Created by leny Lopez on 26/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int tandaMatutina[4];
    int tandaTarde[4];
    int nominaTarde = 0;
    int nominaManana = 0;
    int i;
    for (i=0; i<4; i++) {
        printf("inserte el salario del trabajor %i de la tanda matutina: ",i+1);
        scanf("%i",&tandaMatutina[i]);
        printf("inserte el salario del trabajor %i de la tanda de la tarde: ",i+1);
        scanf("%i",&tandaTarde[i]);
        nominaManana += tandaMatutina[i];
        nominaTarde += tandaTarde[i] ;
    }
    printf("Nomina de Tanda Matutina: %i\n",nominaManana);
    printf("Nomina de Tanda de la tarde: %i\n",nominaTarde);
    printf("Nomina total: %i\n",nominaTarde+nominaManana);
    return 0;
}
