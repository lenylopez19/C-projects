//
//  main.c
//  triangulo
//
//  Created by leny Lopez on 23/10/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ladoUno;
    int ladoDos;
    int ladoTres;
    printf("escribe cuanto mide el primer lado del triangualo=");
    scanf("%i",&ladoUno);
    printf("escribe cuanto mide el segundo lado=");
    scanf("%i",&ladoDos);
    printf("escribe cuanto mide el tercer lado=");
    scanf("%i",&ladoTres);
    if (ladoUno==ladoDos && ladoUno==ladoTres && ladoDos==ladoTres){
        printf("este triangulo es equilatero");
    }else if (ladoUno!=ladoDos && ladoUno!=ladoTres && ladoDos!=ladoTres){
        printf("este triangulo es escaleno");
    }else {
        printf("este triangulo es isoceles");
    }
    
    
    return 0;
}
