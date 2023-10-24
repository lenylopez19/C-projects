//
//  main.c
//  numElevado
//
//  Created by leny Lopez on 20/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float num;
    printf("inserte un numero: ");
    scanf("%f",&num);
    
    num = num * num * num;
    
    printf("%g",num);
    
    return 0;
}
