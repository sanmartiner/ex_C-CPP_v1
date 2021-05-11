#include <stdio.h>
#include <stdlib.h>

void main(){

    int i = 10;

    printf("\n Lacos FOR");
    for(i = 10; i >= 0; i--){
            printf("\n%d", i);
    }

    i = 10;
    printf("\n Lacos While");
    while(i >= 0){
        printf("\n%d", i);
        i--;
    }

    i  = 10;
    printf("\n Lacos DO");
    do{
        printf("\n%d",i);
        i--;
    } while(i >= 0);

}
