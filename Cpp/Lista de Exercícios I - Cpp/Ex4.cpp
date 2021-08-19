//Faça um programa que calcule o aumento de um salário. Ele deve solicitar o valor do salário e a
//porcentagem do aumento. Exiba o valor do aumento e do novo salário.

#include <stdio.h>

int main()
{

    float sal, aum;
    printf("Salário Atual: "); scanf("%f", &sal);
    printf("Valor em porcentagem do aumento: "); scanf("%f", &aum);

    printf("Valor do aumento(em R$): %f", (aum/100)*sal);
    printf("Novo salário: %f", ((aum/100)*sal)+sal);

    return 0;
}