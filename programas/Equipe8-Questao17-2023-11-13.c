#include <stdio.h>
#include <math.h>

int main()
{
    double numerador, denominador, resultado_da_fracao, acumulador;

    for (int i = 1; i <= 6; i++)
    {
        for (int k = 3; k <= 7; k++)
        {
            numerador = (pow(2, 3 * i + k) * k);
            denominador = i * k + 1;

            resultado_da_fracao = numerador / denominador;

            acumulador += resultado_da_fracao;
            printf("Indice de i: %d / Indice de k: %d\n Valor da soma: %.2f\n\n", i, k, acumulador);
        }
    }

    printf("Total: %.2f", acumulador);
}