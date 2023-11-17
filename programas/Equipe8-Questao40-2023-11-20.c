#include <stdio.h>

int main()
{
    int matrizTridimensional[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}},
        tam = 3, soma_diagonal_secundaria = 0;

    printf("Elementos da matriz (c/ exceção das diagonal principal): ");

    // loop para imprimir todos elementos com exceção da diagonal principal
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        { // se a coluna for igual a linha, ela será parte da diagonal principal
            if (i != j) printf("[%d]", matrizTridimensional[i][j]);
        }
    }

    //loop para encontrar e somar a diagonal secundaria
    for (int i = 0; i <= 2; i++) {
        //aqui ele começa pegando a última coluna da primeira linha, -1 da segunda coluna e -2 da terceira coluna (ultimo elemento, segundo elemento, primeiro elemento, respectivamente).
        soma_diagonal_secundaria += matrizTridimensional[i][(2)-i];
    }

    printf("\nSoma da diagonal secundária: %d", soma_diagonal_secundaria);

    return 0;
}