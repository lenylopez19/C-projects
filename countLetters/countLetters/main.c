//
//  main.c
//  countLetters
//
//  Created by leny Lopez on 3/11/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char words[30];
    int numOfChar=0;
    int numOfWords=0;
    int i=0;
    printf("inserte una oracion: \n");
    scanf(" %[^\n]",words);
    numOfWords++;
    while (words[i]) {
        numOfChar++;
        if (words[i]==' ') {
            numOfWords++;
            numOfChar--;
        }
        i++;
    }
    printf("numero de letras: %i\nnumero de palabras: %i\n",numOfChar,numOfWords);
    return 0;
}
