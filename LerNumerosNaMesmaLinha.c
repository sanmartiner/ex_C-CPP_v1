#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

    //Para usar acentos
    setlocale(LC_ALL,"");

    //Definindo Variáveis
    int nota1, nota2, nota3, resultado;

    //Leia os três valores
    printf("Digite as três notas: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    resultado = nota1* nota2 * nota3;

    //Exibindo o resultado.
    printf("Resultado é: %d", resultado);
}

