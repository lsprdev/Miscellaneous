//Faça um programa que peça dois números inteiros e imprima a soma desses dois números

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Digite um número: "); scanf("%d", &num1);
    printf("Digite um número: "); scanf("%d", &num2);
    printf("A soma entre %d e %d é igual a %d\n", num1, num2, num1+num2);

    return 0;
}