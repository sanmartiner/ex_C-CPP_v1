 #include <stdio.h>
 #include <stdlib.h>

void main(){
    //Variaveis
    char palavra[255];

    //Instru��o
    printf("Digite uma palavra\n ");

    //Limpar o Buffer
    setbuf(stdin, 0);

    //Le a string
    fgets(palavra, 255, stdin);

    //Limpa as casas n�o utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //Imprimir na tela
    printf("%s", palavra);
}
