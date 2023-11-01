//
//  main.c
//  arrayChar
//
//  Created by leny Lopez on 31/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char palabra[50];
    int i;
    for (i = 0; i<50; i++) {
        scanf(" %c",&palabra[i]);
        if(palabra[i]=='.'){
            break;
        }
    }
    i=0;
    while (palabra[i]) {
        if (palabra[i]=='a') {
            palabra[i]='e';
        }
        i++;
    }
    printf("%s",palabra);
return 0;
}
