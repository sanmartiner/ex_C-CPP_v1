#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    //Definindo váriaveis.
    int a, b;

    //Entrada dos valores
    printf("Entre com o valor de A: ");
    scanf("%d", &a);

    printf("\n Entre com o valor de B: ");
    scanf("%d", &b);

    //Soma
    printf("\n A + B é d: %d", a + b);

    //Subtração
    printf("\n A - B é d: %d", a - b);

    //Divisão
    printf("\n A / B é d: %d", a / b);

    //Multiplicação
    printf("\n A * B é d: %d", a * b);

    //Resto da Divisão
    printf("\n O resto de divisão de A e B é: %d", a % b);

    //Valor Absoluto
    printf("\n O valor absoluto de -3 = %d \n", abs(-3));

    system("pause");

}
