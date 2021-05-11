#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale(LC_ALL, "");

int a, b;

printf("Entre com o valor de A: ");
scanf("%d", &a);

printf("\n Entre com o valor de B: ");
scanf("%d", &b);

float media = (a + b) / 2;

printf("\n A média dos valores é: %f", media);

system("pause");


}
