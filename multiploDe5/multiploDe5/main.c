//
//  main.c
//  multiploDe5
//
//  Created by leny Lopez on 22/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    printf("inserte un numero: ");
    scanf("%i",&num);
    
    if (num%5 == 0) {
        printf("\nEs multiplo de 5");
    }else{
        printf("\nNo es multipo de 5");
    }
    
    
    return 0;
}
