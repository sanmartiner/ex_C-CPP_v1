#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int op;
    float num1, num2;

    printf("Operações Matemática. \n");
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo  valor: ");
    scanf("%f", &num2);

    printf("\n 1 - Somar.");
    printf("\n 2 - Subtrair.");
    printf("\n 3 - Multiplicar.");
    printf("\n 4 - Dividir.");
    printf("Selecione o operador: ");
    scanf("%d", &op);

    switch(op){
        case 1 :
            printf("\n Resultado: %f", num1 + num2);
            break;
        case 2 :
            printf("\n Resultado: %f", num1 - num2);
            break;
        case 3 :
            printf("\n Resultado: %f", num1 * num2);
            break;
        case 4:
            printf("\n Resultado: %f", num1 / num2);
            break;
        default:
            printf("\n Operador Invalido.");
    }



}
