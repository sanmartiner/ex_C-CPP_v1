#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    float nota1, nota2, nota3;

    printf("Digite as notas do aluno: \n");
    scanf("\n%f \n%f \n%f", &nota1, &nota2, &nota3);

    float media = (nota1 + nota2 + nota3)/3;

    if(media >= 7){
        printf("\n Aluno aprovado.");
    } else{
        printf("\n Aluno reprovado.");
    }

}
