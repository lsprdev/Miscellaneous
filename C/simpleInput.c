#include <stdio.h>

int main(){
    //Perguntar o nome do usuário.
    char nome[10]; //Tenho que colocar o tamanho da string para usá-la
    /* para string tenho que usar %s em vez de %c que só seria usado
    se fosse apenas um caracter*/
    printf("Olá, por favor digite seu nome para começarmos: ");
    scanf("%s", &nome);
    printf("Você foi cadastrado com sucesso! %s, Seja bem vindo ao nosso sistema!\n", nome);
}