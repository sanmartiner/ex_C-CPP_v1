#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    //Definindo v�riaveis.
    int a, b;

    //Entrada dos valores
    printf("Entre com o valor de A: ");
    scanf("%d", &a);

    printf("\n Entre com o valor de B: ");
    scanf("%d", &b);

    //Soma
    printf("\n A + B � d: %d", a + b);

    //Subtra��o
    printf("\n A - B � d: %d", a - b);

    //Divis�o
    printf("\n A / B � d: %d", a / b);

    //Multiplica��o
    printf("\n A * B � d: %d", a * b);

    //Resto da Divis�o
    printf("\n O resto de divis�o de A e B �: %d", a % b);

    //Valor Absoluto
    printf("\n O valor absoluto de -3 = %d \n", abs(-3));

    system("pause");

}
