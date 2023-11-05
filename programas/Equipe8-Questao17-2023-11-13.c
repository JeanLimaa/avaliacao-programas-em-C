#include <stdio.h>
#include <math.h>

int main() {
    double numerador, denominador, resultado_da_fracao, acumulador;

    for(int i = 1; i <= 9; i++){
        numerador = pow(2, 3*i+pow(i, 2));
        denominador = i + 1;

        resultado_da_fracao = numerador / denominador;
        acumulador +=  resultado_da_fracao;
        printf("Indice: %d / Valor da soma: %2.f\n", i,acumulador);        
    }

    printf("Total: %2.f", acumulador);
}