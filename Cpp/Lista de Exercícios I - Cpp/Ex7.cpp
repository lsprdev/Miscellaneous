//Converta uma temperatura digitada em Celsius para Fahrenheit. F = 9*C/5 + 32

#include <stdio.h>

int main()
{
    float C, F;
    printf("Temperatura em Celsius: "); scanf("%f", &C);
    F = 9*C/5 + 32;
    printf("Conversão para Fahrenheit: %f", F);

    return 0;
}