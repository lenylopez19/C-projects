//
//  main.c
//  isograma
//
//  Created by leny Lopez on 4/11/23.
//

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    char sentence[50];
    printf("write a sentence: ");
    scanf(" %[^\n]",sentence);
    int i =0;
    bool isIsogram = true;
    int counter=0;
    while (sentence[i] != ' ' && sentence[i]!= '-') {
        counter = 0;
        for (int a = 0; sentence[a]; a++) {
            if (sentence[i] == sentence[a]) {
                counter++;
            }
            if (counter ==2) {
                isIsogram = false;
                break;
            }
        }
        if (!isIsogram) {
            break;
        }
        i++;
    }
    
    if (isIsogram) {
        printf("es un isograma");
    }else{
        printf("NO es un isograma");
    }
    
    return 0;
}
