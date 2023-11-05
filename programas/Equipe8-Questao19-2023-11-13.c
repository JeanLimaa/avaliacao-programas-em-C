#include <stdio.h>
#include <math.h>

int main()
{
    double numerador, denominador, resultado_da_fracao, acumulador;

    for (int i = 1; i <= 6; i++)
    {
        for (int k = 3; k <= 7; k++)
        {
            for (int j = 1; j <= 4; j++)
            {
                numerador = pow(2, j*i+k); //base, expoente
                denominador = i * k + 1;

                resultado_da_fracao = (numerador / denominador) * (k*pow(j, i));

                acumulador += resultado_da_fracao;
                printf("Indice de i: %d /  Indice de k: %d / Indice de j: %d\n Valor da soma: %.2f\n\n", i, k, j, acumulador);
            }
        }
    }

    printf("Total: %.2f", acumulador);
}