//
//  main.c
//  4.cifrasPares
//
//  Created by leny Lopez on 28/10/23.
//

#include <stdio.h>
#include <stdbool.h>

void printPrettyArr(int arr[], int size){
    int i;
    printf("[");
    for (i=0; i<size; i++) {
        printf("%i",arr[i]);
        if (i < size-1) {
            printf(",");
        }
    }
    printf("]");
}

bool isPar(int num){
    if (num % 2 == 0 && num != 0) {
        return true;
    }else{
        return false;
    }
}

bool cifraPar(int num){
    int tempNum = num;
    int digit;
    bool stillPar = true;
    do {
        digit = tempNum%10;
        tempNum = tempNum/10;
        if (!isPar(digit)) {
            stillPar = false;
        }
    } while (tempNum > 0 && stillPar);
    return stillPar;
}

void populateArr(int arr[], int size, int num){
    int i;
    for (i= size-1; i>-1; i--) {
        if (num>=10) {
            arr[i] = num%10;
            num /= 10;
        }else{
            arr[i]=num;
        }
    }
}
void biggestOfArr(int arrResult[], int arrList[] ,int size2){
    arrResult[0]=0;
    arrResult[1]=0;
    int i;
    for (i = 0; i<size2; i++) {
        if (arrList[i] > arrResult[0]) {
            arrResult[0] = arrList[i];
            arrResult[1] = i;
        }
    }
}

int main(int argc, const char * argv[]) {
    int num=0;
    int listNum[4];
    int majorNumber[2];
    do {
        printf("inserte un numero de 4 digitos: ");
        scanf("%i",&num);
    } while (num <1000);
    if (cifraPar(num)){
        populateArr(listNum, 4, num);
        printPrettyArr(listNum, 4);
        biggestOfArr(majorNumber, listNum, 4);
        printf("\nEl numero Par mayor es : %i en la posicion: %i\n\n",majorNumber[0],majorNumber[1]+1);
    }else{
        printf("\nel numero contiene almenos 1 cifra impar\n\n");
    }
    return 0;
}


