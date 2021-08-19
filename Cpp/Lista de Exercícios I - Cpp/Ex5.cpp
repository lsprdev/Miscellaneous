//Solicite o preço de uma mercadoria e o percentual de desconto. Exiba o valor do desconto e o
//preço a pagar.

#include <stdio.h>

int main()
{
    float des, mer;
    printf("Preço da mercadoria sem desconto: "); scanf("%f", &mer);
    printf("Valor do desconto em porcentagem: "); scanf("%f", &des);

    printf("Valor do desconto em R$: %f\n", (des/100)*mer);
    printf("Preço a pagar: %f", (mer-(des/100)*mer));


    return 0;
}