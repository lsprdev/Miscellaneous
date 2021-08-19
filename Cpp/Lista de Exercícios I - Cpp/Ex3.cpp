//Escreva um programa que leia a quantidade de dias, horas, minutos e segundos do usuário. Calcule
//o total em segundos.

#include <stdio.h>

int main()
{
    int dias, horas, min, seg, total_seg;

    printf("Quantidade de dias: "); scanf("%d", &dias);
    printf("Quantidade de horas: "); scanf("%d", &horas);
    printf("Quantidade de minutos: "); scanf("%d", &min);
    printf("Quantidade de segundos: "); scanf("%d", &seg);

    total_seg = ((dias*24+horas)*60+min)*60+seg;

    printf("Total em segundos: %d\n", total_seg);

    return 0;
}