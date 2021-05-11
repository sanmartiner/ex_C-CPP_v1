#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    for(int i = 10; i <= 20; i++){
        if(i % 2 == 0){
            printf("\n%d é Par", i);
        } else {
            printf("\n%d é Impar", i);
        }
    }


}
