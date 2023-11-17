#include <stdio.h>

int main()
{
    int matrizTridimensional[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}},
        tam = 3, soma_arestas = 0;

    printf("Diagonais principais: ");
    // loop para somar as arestas e encontrar a diagonal principal
    for (int i = 0; i < tam; i++)
    {
        // somar as arestas
        soma_arestas += matrizTridimensional[0][i];       // 0 pois quero sempre o primeiro elemento
        soma_arestas += matrizTridimensional[tam - 1][i]; // tam - 1, pois quero o último elemento (e o array inicia em 0).
        if (i != 1)
        {
            soma_arestas += matrizTridimensional[1][i]; // Segunda linha, excluindo o elemento na coluna 1
        }

        for (int j = 0; j < tam; j++)
        {
            // se a coluna for igual a linha, ela será parte da diagonal principal
            if (i == j)
            {
                printf("[%d]", matrizTridimensional[i][j]);
            }
        }
    }

    printf("\nSoma das arestas: %d", soma_arestas);

    return 0;
}