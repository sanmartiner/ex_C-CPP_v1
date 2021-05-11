#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

//INICIALIZANDO VÁRIAVEIS

 int a = 10;
 int b = 20;
 int c;

 /*SET DAS CONFIGURAÇÕES DE ENTRADA DO TECLADO
DO SISTEMA NO COMPILADOR*/

 setlocale(LC_ALL, "");

//PRINT VALORES
 printf("Valor de A é: %d% \n", a);
 printf("Valor de B é: %d \n", b);
 printf("Valor de A + B é: %d \n", a+b);

//LER VALORES E ARMAZENANDO NA MEMÓRIA
 printf("Digite o valor para a variavel C: ");
 scanf("%d", &a);

 float d = 5.5;
 printf("O valor de D é = %f \n", d);
 scanf("%f", &d);
 printf("O valor de b mudou para %f \n", d);

 //LIMPAR BUFFER DE LEITURA DE VÁRIAVEIS.

 fflush(stdin);
 char e = 't';
 scanf("%c", &e)
 printf("Valor de E é %c ", e);

}
