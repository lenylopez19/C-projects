//
//  main.c
//  notasPrimerSegundoParcial
//
//  Created by leny Lopez on 22/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float nota1,nota2;
    printf("inserte la nota del primer parcial: ");
    scanf("%f",&nota1);
    printf("inserte la nota del segundo parcial: ");
    scanf("%f",&nota2);
    
    if (nota1 >=8 && nota2 >= 8) {
        printf("apobracion directa");
    }else if(nota1 >=6 && nota2 >= 6){
        printf("rinde examen final");
    }else{
        printf("debe recuperar");
    }
    
    return 0;
}
