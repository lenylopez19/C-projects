//
//  main.c
//  serieDeCaracteres
//
//  Created by leny Lopez on 26/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char arr[50];
    char userInput;
    int count = 0;
    do {
        printf("introduce un carater: ");
        scanf("%c",&arr[count]);
        count++;
    } while (arr[count-1] != ".");
    return 0;
}
