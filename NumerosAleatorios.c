#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){

    setlocale(LC_ALL,"");

    //Responsável por alimentar o rand de forma diferente.
    srand((unsigned)time(NULL));

    //Variavel que recebe o resto da divisão do numero por 3

    int aleatorio = rand() % 3;

    //Variavel que recebe o resto da divisão do numero por 3

    int aleatorioSegundo = (rand() %5) + 1;

    //Imprime valor

    printf("%d", aleatorio);

    //Pausa o programa após execução
    system("pause");
}
