#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

int main(){
    //Declarando Variaveis
    int a, b;
    a = 20;
    //Imprimindo o valor de uma variavel
    printf("Valor de a: %d. \n",a);

    //Imprimindo o endere�o de memoria de uma vari�vel
    printf("Edere�o de a: %d \n", &a);

    //Vari�veis armazenam valores
    int b = 10;

    //Ponteiros armazenam posi��es de mem�ria
    int *ponteiroB;

    //Ponteiro recebendo a posi��o na mem�ria da vari�vel b;
    ponteiroB = &b;

    //* Pode ser lido como: Conte�do apontado por.
    *ponteiroB = 40;

return 0;
}
