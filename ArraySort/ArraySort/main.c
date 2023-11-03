//
//  main.c
//  ArraySort
//
//  Created by leny Lopez on 3/11/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[]= {5,4,3,2,1};
    int swap=0;
    int i;
    int a;
    for (a=0; a<5; a++) {
        
    for (i=0; i<4; i++) {
        if (arr[i]>arr[i+1]) {
            swap = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=swap;
        }
    }
        
    }
    
    printf("[");
    for (i=0; i<5; i++) {
        printf("%i",arr[i]);
        if (i<4) {
            printf(",");
        }
    }
    printf("]");
    
    
    return 0;
}
