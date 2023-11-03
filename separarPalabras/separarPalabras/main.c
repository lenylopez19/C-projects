//
//  main.c
//  separarPalabras
//
//  Created by leny Lopez on 3/11/23.
//

#include <stdio.h>

int getNumberOfWords(char words[]){
    int i=0;
    int counter=0;
    counter++;
    while (words[i]) {
        if (words[i]==' ') {
            counter++;
        }
        i++;
    }
    return counter;
}

int getStringSize(char arr[]){
    int i=0;
    while (arr[i]) {
        i++;
    }
    return i;
}

void cleanString(char arr[],int size){
    if (size == 0) {
        size = getStringSize(arr);
    }
    int i;
    for (i=0; i<size; i++) {
        arr[i]= '\0';
    }
}

int main(int argc, const char * argv[]) {
    char sentence[200];
    printf("escriba una oracion : ");
    scanf(" %[^\n]",sentence);
    sentence[getStringSize(sentence)]='.';
    int numberOfWords = getNumberOfWords(sentence);
    char wordList[numberOfWords][20];
    int lastWordIndex=0;
    int savedWordIndex = -1;
    int tempWordIndex =0;
    int i,a;
    char tempWord[20];
    for (i = 0; i<numberOfWords; i++) {
        cleanString(wordList[i],20);
    }
    i=0;
    while(sentence[i]) {
        if (sentence[i]==' ' || sentence[i]=='.') {
            savedWordIndex++;
            cleanString(tempWord,0);
            tempWordIndex=0;
            for (a=lastWordIndex; a<i; a++) {
                tempWord[tempWordIndex]=sentence[a];
                tempWordIndex++;
            }
            lastWordIndex=i+1;
        }
        for (a=0; tempWord[a]; a++) {
            wordList[savedWordIndex][a]=tempWord[a];
        }
        i++;
    }
    printf("lista de palabras = ");
    printf("[ ");
    int wordLength;
    for (i = 0; i<numberOfWords; i++) {
        printf("[");
        wordLength= 0;
        for (a=0; wordList[i][a]; a++) {
            wordLength++;
        }
        for (a=0; wordList[i][a]; a++) {
            printf("'%c'",wordList[i][a]);
            if (a < wordLength-1) {
                printf(",");
            }
        }
        printf("]");
        if (i<numberOfWords-1) {
            printf(", ");
        }
    }
    printf(" ]\n\n");
    for (i=0; i<numberOfWords; i++) {
        printf("%s\n",wordList[i]);
    }
    printf("\n");
    return 0;
}
