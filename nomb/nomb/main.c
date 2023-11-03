//
//  main.c
//  nomb
//
//  Created by leny Lopez on 2/11/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char nombre[30];
    printf("inserte su nombre:");
    scanf(" %[^\n]",nombre);
    printf("%s\n",nombre);
    return 0;
}
