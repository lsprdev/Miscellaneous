//Escreva um programa que pergunte a quantidade de km percorridos por um carro alugado pelo
//usuário, assim como a quantidade de dias pelos quais o carro foi alugado. Calcule o preço a pagar,
//sabendo que o carro custa R$ 60,00 por dia e R$ 0,15 por km rodado.

#include <stdio.h>

int main()
{
    float km, total_p; int dias;
    printf("Quantidade de km percorridos: "); scanf("%f", &km);
    printf("Quantidade de dias pelos quais o carro foi alugado: "); scanf("%d", &dias);

    total_p = (dias*60)+(0.15*km);

    printf("Preço a pagar: R$%f", total_p);
    return 0;
}