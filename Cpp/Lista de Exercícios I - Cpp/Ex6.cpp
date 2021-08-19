//Calcule o tempo de uma viagem de carro. Pergunte a distância a percorrer e a velocidade média
//esperada para a viagem.

#include <stdio.h>

int main()
{
    float dist, vel;
    printf("Distância que irá percorrer em km: "); scanf("%f", &dist);
    printf("Velocidade média esperada para a viagem em km/h: "); scanf("%f", &vel);

    printf("Tempo esperando para chegar ao seu destino em horas: %f", dist/vel);

    return 0;

}