#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int opcao;

    printf ("Escolha uma opcao: ");
    printf ("\n 1 - Opção 1 ");
    printf ("\n 2 - Opção 2 ");
    printf ("\n 3 - Opção 3 \n");

    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("\n Opcao 1 foi escolhida");
            break;
        case 2:
            printf("\n Opcao 2 foi escolhida");
            break;
        case 3:
            printf("\n Opcao 3 foi escolhida");
            break;
        default:
            printf("\n Opcao Invalida");
            break;


    }
system("pause");
}
