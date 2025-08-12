#include <stdio.h>

void torre(int casas, char direcao[20])
{
    for (int i = 1; i < casas; i++)
    {
        printf("A torre está se movendo %d casas para %s\n", casas, direcao);
    }
}

void bispo(int casasVertical, int casasHorizontal, char direcaoVertical[20], char direcaoHorizontal[20])
{

    for (casasVertical = 1; casasVertical < 6; casasVertical++)
    {
        for (casasHorizontal = 1; casasHorizontal < 6; casasHorizontal++)
        {
            if (casasVertical == casasHorizontal)
            {
                 printf("Bispo se movendo %d casa(s) para %s e %d casa(s) para %s\n",
                   casasVertical, direcaoVertical,
                   casasHorizontal, direcaoHorizontal);
                   break;
            }
        }
    }
}

void rainha(int casasVertical, int casasHorizontal, char direcaoVertical[20], char direcaoHorizontal[20])
{
    do
    {
        printf("Rainha se movendo %d para %s e %d para %s\n", casasVertical, direcaoVertical, casasHorizontal, direcaoHorizontal);
        casasVertical++;
        casasHorizontal++;
    } while (casasVertical < 9 && casasHorizontal < 9);
}

int main()
{

    printf("------------- TORRE -------------\n");
    int casasTorre = 6;
    char direcaoTorre[20] = "Direita";

    torre(casasTorre, direcaoTorre);

    printf("------------- BISPO -------------\n");
    int bispoVertical = 1, bispoHorizontal = 1;
    char bispoDirecaoVertical[20] = "Cima", bispoDirecaoHorizontal[20] = "Direita";
    bispo(bispoVertical, bispoHorizontal, bispoDirecaoVertical, bispoDirecaoHorizontal);

    printf("------------- RAINHA -------------\n");
    int rainhaVertical = 1, rainhaHorizontal = 1;
    char rainhaDirecaoVertical[20] = "Cima", rainhaDirecaoHorizontal[20] = "Direita";

    rainha(rainhaVertical, rainhaHorizontal, rainhaDirecaoVertical, rainhaDirecaoHorizontal);

    printf("------------- CAVALO -------------\n");

    for (int cavaloHorizontal = 1; cavaloHorizontal < 2; cavaloHorizontal++)
    {
        for (int cavaloVertical = 1; cavaloVertical < 3; cavaloVertical++)
        {
            printf("Cavalo se movimentando %d casas para cima\n", cavaloVertical);
        }
        printf("Cavalo se movimentando %d casa para direita\n", cavaloHorizontal);
    }

    return 0;
}