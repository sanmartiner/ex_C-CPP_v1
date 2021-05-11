#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    float lado1, lado2, lado3;

    printf("Digite o tamanho dos lados do triangulo: \n");
    scanf("\n%f \n%f \n%f", &lado1, &lado2, &lado3);

    if(lado1 == lado2 && lado2 == lado3){
        printf("O triangulo é equilatero.");
    } else {
        printf(" O triangulo não é equilatero.");
    }



}
