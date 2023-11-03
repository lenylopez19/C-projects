//
//  main.c
//  Strings
//
//  Created by leny Lopez on 2/11/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char nombre[30];
    char userName[30];
    char password[30];
    printf("inserte el nombre: ");
    scanf(" %[^\n]",nombre);
    printf("inserte el username: ");
    scanf(" %[^\n]",userName);
    printf("inserte la contrasena: ");
    scanf(" %[^\n]",password);
    
    printf("nombre: %s usuario: %s contrasena: %s",nombre,userName,password);
}
