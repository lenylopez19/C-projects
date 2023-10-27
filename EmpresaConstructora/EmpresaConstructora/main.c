//
//  main.c
//  EmpresaConstructora
//
//  Created by leny Lopez on 15/10/23.
//

#include <stdio.h>

void calcularSalario(int horasTrabajadas){
    float total,pagoHorasExtra,horasExtra,precioPorHora,precioPorHoraExtra,nomina,horasMinimas,horasMaximas;
    
    precioPorHora = 327.50;
    horasMinimas = 120;
    horasMaximas = 280;
    precioPorHoraExtra = precioPorHora + (precioPorHora/3);
    
    
    horasExtra = horasTrabajadas - horasMinimas;
    pagoHorasExtra = horasExtra * precioPorHoraExtra;
    nomina = horasMinimas * precioPorHora ;
    total = nomina + pagoHorasExtra;
    
    printf("\nSub-Total: RD$%g\n",nomina);
    printf("Horas extra trabajadas: %g\n",horasExtra);
    printf("Pago por horas extras : RD$%g\n",pagoHorasExtra);
    printf("Total: RD$%g \n\n",total);
}

int main(int argc, const char * argv[]) {
    short numTrabajadores,i;
    float horasTrabajadas;
    int horasMinimas = 120;
    int horasMaximas = 280;
    
    numTrabajadores = 10;
    
    printf("==============================\n");
    printf("     Empresa constructora\n");
    printf("==============================\n\n");
    
    for (i = 0; i<numTrabajadores ; i++) {
        printf("------------------------------\n");
        printf("         Trabajador %i \n",i+1);
        printf("------------------------------\n\n");
        
        do{
            printf("Inserte las horas trabajadas (120-280): ");
            scanf("%f",&horasTrabajadas);
        }while(horasTrabajadas < horasMinimas || horasTrabajadas > horasMaximas);
        
        calcularSalario(horasTrabajadas);
       
        
        
    }
    return 0;
}
