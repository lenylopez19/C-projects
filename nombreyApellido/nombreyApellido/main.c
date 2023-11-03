//
//  main.c
//  nombreyApellido
//
//  Created by leny Lopez on 2/11/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char nombre[30];
    char apellido[30];
    int count =0;
    int i=0;
    printf("inserte el nombre: ");
    scanf(" %[^\n]",nombre);
    printf("inserte el apellido: ");
    scanf(" %[^\n]",apellido);
    
    printf("el nombre completo es: %s %s",nombre,apellido);
    
    while (nombre[i]) {
        if (nombre[i]=='e') {
            count++;
        }
        i++;
    }
    
    printf("numero de letras e: %i",count);
    
    return 0;
}
