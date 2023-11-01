//
//  main.c
//  sortTest
//
//  Created by leny Lopez on 31/10/23.
//

#include <stdio.h>

//void printArr(int arr[],int size){
//    int i;
//    printf("\n[");
//    for (i = 0; i<size; i++) {
//        printf("%i ",arr[i]);
//        if (i<size-1) {
//            printf(",");
//        }
//    }
//    printf("]\n\n");
//}

int main(int argc, const char * argv[]) {
    int arr[5];
    int i;
    int value=0;
    int swap=0;
    
    
    arr[0]=90;
    arr[1]=80;
    arr[2]=70;
    arr[3]=60;
    arr[4]=50;
    
    value = arr[4];
    for (i=4; i>-1; i--) {
     
        if (i==0) {
            
        }else{
            if (value<arr[i-1]) {
                swap = arr[i];
                arr[i]= value;
                arr[i+1]= swap;
//                printArr(arr, 5);
                }else{
                    value=arr[i-1];
                }
        }
        printf("\narr[i]: %i\narr[i+1]: %i",arr[i],arr[i+1]);
    }
        
    
    
    
    
    return 0;
}
