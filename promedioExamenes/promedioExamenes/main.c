//
//  main.c
//  promedioExamenes
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float nota1,nota2,nota3,promedio;
    printf("inserte la nota1: ");
    scanf("%f",&nota1);
    printf("inserte la nota2: ");
    scanf("%f",&nota2);
    printf("inserte la nota3: ");
    scanf("%f",&nota3);
    
    promedio = (nota1+nota2+nota3)/3;
    
    printf("su promedio es: %.1f",promedio);
    
    return 0;
}
