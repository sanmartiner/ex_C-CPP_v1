#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    //Para usar acentos
    setlocale(LC_ALL,"");

    //Definindo Vari�veis
    int nota1, nota2, nota3, resultado;

    //Leia os tr�s valores
    printf("Digite as tr�s notas: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    resultado = nota1* nota2 * nota3;

    //Exibindo o resultado.
    printf("Resultado �: %d", resultado);
}

