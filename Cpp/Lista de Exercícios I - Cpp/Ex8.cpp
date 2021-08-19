//Faça agora o contrário, de Fahrenheit para Celsius.

#include <stdio.h>

int main()
{
    float C, F;
    printf("Temperatura em Fahrenheit: "); scanf("%f", &F);
    C = (F-32)/1.8;
    printf("Conversão para Celsius: %f", C);

    return 0;
}