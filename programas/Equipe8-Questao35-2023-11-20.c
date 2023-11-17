#include <stdlib.h>
#include <stdio.h>

#define NUMBER_OF_CARDS 52 //para mudar os valores desejados de 0 a N-1 e o tamanho da Array, basta alterar aqui.

int randomNumber()
{
    return rand() % NUMBER_OF_CARDS; // retorna um número aleatório no intervalo de 0 a 51
}

int numberExists(int num, int *array)
{
    for (int i = 0; i < NUMBER_OF_CARDS; i++)
    {
        if(num == array[i]){
            return 1; //retorna 1, para manter o loop rodando, caso o número seja igual.
        }
    }
    return 0; //retorna zero para interromper o loop
}

int main()
{
    int vetor[NUMBER_OF_CARDS], num_random;

    for (int i = 0; i < NUMBER_OF_CARDS; i++)
    {
        //loop para garantir que o número não vai se repetir
        do
        {
            num_random = randomNumber();
        } while (numberExists(num_random, vetor));

        vetor[i] = num_random;
    }

    //loop para imprimir os indices e os valores correspondentes 
    for (int j = 0; j < NUMBER_OF_CARDS; j++)
    {
        printf("Indice: %d / num: %d\n", j, vetor[j]);
    }

    getchar();

    return 0;
}