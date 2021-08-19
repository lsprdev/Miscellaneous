//Escreva um programa que leia um valor em metros e o exiba convertido em milímetros

#include <stdio.h>

int main()
{
    float metros;
    printf("Digite um valor em metros: "); scanf("%f", &metros);
    printf("%f metro(s) corresponde(m) a %f milímetro(s)", metros, metros*1000);
    return 0;
}