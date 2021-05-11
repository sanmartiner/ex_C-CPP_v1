#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

//SET CONFIGURACOES IDIOMA3

setlocale(LC_ALL, "");

float a, b, absoluto;

//LEITURA DAS NOTAS

printf("Entre com o valor de A: ");
scanf("%f", &a);

printf("\n Entre com o valor de B: ");
scanf("%f", &b);aDED0

//IMPRIMIR NOTAS COM O VALOR ABSOLUTO

printf("\n A diferença de A a para B, valor absoluto é: %f", fabs(a - b));

}
