//
//  main.c
//  revisarRepetidoArr
//
//  Created by leny Lopez on 31/10/23.
//

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    int nums[10];
    int i;
    int counter;
    int runCounter=0;
    bool repeated = false;
    for (i=0; i<10; i++) {
        printf("inserte los valores %i/10: ",i+1);
        scanf("%i",&nums[i]);
    }
    printf("\n");
    
    for (i=0; i<10; i++) {
        counter = 0;
        runCounter++;
        for (int j=0; i<10; j++) {
            runCounter++;
            if (nums[i]==nums[j]) {
                counter++;
                if (counter ==2) {
                    repeated = true;
                    break;
                }
            }
        }
        if (repeated) {
            break;
        }
    }
    
    printf("\nel programa se ejecuto %i veces\n",runCounter);
    
    if (repeated) {
        printf("\nhay numeros repetidos\n");
    }else{
        printf("\n No hay numero repetidos\n");
    }
    
    
    
    return 0;
}
