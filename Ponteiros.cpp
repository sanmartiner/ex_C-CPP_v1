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

    //Imprimindo o endereço de memoria de uma variável
    printf("Edereço de a: %d \n", &a);

    //Variáveis armazenam valores
    int b = 10;

    //Ponteiros armazenam posições de memória
    int *ponteiroB;

    //Ponteiro recebendo a posição na memória da variável b;
    ponteiroB = &b;

    //* Pode ser lido como: Conteúdo apontado por.
    *ponteiroB = 40;

return 0;
}
