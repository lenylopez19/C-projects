//
//  main.c
//  cursoDeAlgoTep
//
//  Created by leny Lopez on 26/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int notasCursoA[6];
    int notasCursoB[6];
    int i;
    float promedioA= 0;
    float promedioB= 0;
    float promedioGlobal = 0;
    int estMayorProm=0;
    for (i=0; i<6; i++) {
        printf("inserte la nota del estudiante %i CURSO A: ",i+1);
        scanf("%i",&notasCursoA[i]);
        printf("inserte la nota del estudiante %i CURSO B: ",i+1);
        scanf("%i",&notasCursoB[i]);
        promedioA += notasCursoA[i];
        promedioB += notasCursoB[i];
    }
    promedioGlobal = (promedioA + promedioB)/12;
    promedioA /= 6;
    promedioB /= 6;
    
    printf("\npromedio del Aula A: %.2f\n",promedioA);
    printf("promedio del Aula B: %.2f\n",promedioB);
    
    if (promedioA > promedioB) {
        printf("el Aula con el mayor promedio: Aula A \n");
    }else{
        printf("el Aula con el mayor promedio: Aula B \n");
    }
    
    for (i = 0; i<6; i++) {
        if (notasCursoA[i] > promedioGlobal) {
            estMayorProm++;
        }
        if (notasCursoB[i] > promedioGlobal) {
            estMayorProm++;
        }
    }
    
    printf("\nHay %i estudiantes entre ambas aulas con un promedio mayor a %.2f\n",estMayorProm,promedioGlobal);
    
    
    
    return 0;
}
