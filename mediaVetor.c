#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");


    printf("Qual sera o tamanho do vetor?");
    int vetorLentgh;
    scanf("%d", &vetorLentgh);

    float vetor[vetorLentgh], soma;
    int i;

    for(i = 0; i < vetorLentgh; i++){
        printf("Digite o valor do vetor %d:", i);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    float media = soma/i;
    printf("O valor da média do vetor é: %.2f", media);

    system("pause");

}
