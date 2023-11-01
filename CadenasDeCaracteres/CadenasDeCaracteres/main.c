//
//  main.c
//  CadenasDeCaracteres
//
//  Created by leny Lopez on 31/10/23.
//

#include <stdio.h>


int repeatedChar(char palabra[], char caracter){
    int i= 0;
    int counter = 0;
    while (palabra[i]) {
        if (palabra[i]==caracter) {
            counter++;
        }
        i++;
    }
    return counter;
}

int main(int argc, const char * argv[]) {
    char palabra[20];
    char caracter = ' ';
    printf("ingrese una palabra: ");
    scanf(" %[^\n]",palabra);
    printf("inserte el caracter a buscar: ");
    scanf(" %c",&caracter);
    printf("la letra %c se repite %i veces\n",caracter,repeatedChar(palabra,caracter));
    
return 0;
}
