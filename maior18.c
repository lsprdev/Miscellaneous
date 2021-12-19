#include <stdio.h>

int main(){
    //Perguntar a idade do usuário.
    //Testa se o usuário é ou não maior de 18 anos.
    //Mostrar o resultado no terminal.
    int idade;
    
    printf("Quantos anos você tem? ");
    scanf("%d", &idade);
    if(idade >= 18){
        printf("Você é maior de idade.\n");
    }
    else {
        printf("Você ainda é menor de idade.\n");
    }
    
}