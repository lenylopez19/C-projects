//
//  main.c
//  departamentoDePersonalFunc
//
//  Created by leny Lopez on 28/10/23.
//

#include <stdio.h>

void ProcesarSalario(float arr[], int size){
    float precioPorHora = 235;
    int porcientoHorasExtra = 10;
    
    float totalHorasTrabajadas = 0;
    float totalHorasExtra = 0;
    float totalHorasNormales= 0;
    float promHorasTrabajadas=0;
    int diasAusente=0;
    float precioPorHoraExtra = 0;
    float salario =0;
    float salarioExtra=0;
    
    precioPorHoraExtra= precioPorHora + (precioPorHora*(porcientoHorasExtra/100.0));
    
    int i;
    
    for ( i=0; i<size; i++) {
        if (arr[i]==0) {
            diasAusente++;
        }
        if (arr[i]>8) {
            totalHorasExtra+= arr[i]-8;
        }
        totalHorasTrabajadas += arr[i];
    }
    
    totalHorasNormales = totalHorasTrabajadas - totalHorasExtra;
    promHorasTrabajadas = totalHorasTrabajadas/size;
    
    printf("\n===============================\n\n");
    printf("Dias Ausente: %i/30\n",diasAusente);
    printf("Horas extra Trabajadas en el mes: %.2f\n",totalHorasExtra);
    printf("Promedio de horas diarias Trabajadas en el mes : %.2f\n",promHorasTrabajadas);
    salario = totalHorasNormales * precioPorHora;
    salarioExtra = totalHorasExtra * precioPorHoraExtra;
    printf("SubTotal : %.2f\n",salario);
    printf("Pago por horas extra: %.2f\n",salarioExtra);
    printf("Total: %.2f\n\n",salario+salarioExtra);
    printf("\n===============================\n");
    
}

int main(int argc, const char * argv[]) {
   
    float mes[30];
    int dia=0;
    int i;
   
    printf("===============================\n");
    printf("    Departamento de personal");
    printf("\n===============================\n");
    
    for (i=0; i<30; i++) {
        printf("\ninserte el dia: ");
        scanf("%i",&dia);
        printf("horas trabajadas del dia %i: ",dia);
        scanf("%f",&mes[dia-1]);
    }
    
    ProcesarSalario(mes,30);
   
    return 0;
}
