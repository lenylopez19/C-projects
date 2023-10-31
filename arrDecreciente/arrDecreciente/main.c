//
//  main.c
//  arrDecreciente
//
//  Created by leny Lopez on 26/10/23.
//

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    int arr[10];
    int i;
    bool ascend = true;
    for (i = 0; i<10; i++) {
        printf("inserte un numero %i/10 : ",i+1);
        scanf("%i",&arr[i]);
    }
    for (i=0; i<10; i++) {
        if (arr[i+1] < arr[i]) {
            ascend = false;
            break;
        }
    }
    if(ascend) {
        printf("estan ordenados ascendentes\n");
    }else{
        printf("No estan ordenados ascendentes\n");
    }
    return 0;
}
