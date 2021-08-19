#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <time.h>

#define STOP 0
#define ESQD 1
#define DIRT 2
#define CIMA 3
#define BAIX 4
#define MURO 178
#define COBR 219
#define FRUT 149

int fimJogo = 0;
const int largura = 20;
const int altura = 20;
int x, y, frutaX, frutaY, pontos, direcao;


void inicio()
{
    time_t t;
    fimJogo = 0;
    direcao = STOP;
    x = largura / 2;
    y = largura / 2;
    pontos = 0;
    srand(time(&t));
    frutaX = rand() % largura + 1;
    frutaY = rand() % largura + 1;
}


void desenho()//interface do usuário
{
    int i, j;
    system("clear");

    for (i = 0; i <= largura + 2; i++)
    {
        printf("%c", char(MURO));
    }
    //Parei em 3min

    printf("\n");
    for (i = 0; i <= largura + 2; i++)
    {
        printf("%c", char(MURO));
    }
    printf("\nPontos = %d", pontos);


}

void entrada()//captura dos dados do usuário
{

}
void logica()
{

}
void final()
{

}

int main()
{
    inicio();
    while (!fimJogo)
    {
        desenho();

        entrada();

        logica();
    }
    final();
}