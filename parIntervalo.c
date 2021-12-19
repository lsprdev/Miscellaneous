#include <stdio.h>

int main(){
    //Pedir um intervalo de número.
    //Mostrar todos os números pares desse intervalo.

    int intervPri, intervUlt;

    printf("Primeiro número do intervalo: ");
    scanf("%d", &intervPri);

    printf("Último número do intervalo: ");
    scanf("%d", &intervUlt);

    while(intervPri != intervUlt){

        if(intervPri % 2 == 0){
            printf("%d\n", intervPri);

        }
        intervPri++;
    }

}