#include <stdio.h>

int main() {
    int sequencia[500];
    int a = 0;
    int numero;

    printf("Digite uma sequência de números (digite 0 para finalizar):\n");

    do{
        scanf("%d", &numero);
        sequencia[a] = numero;
        a++;
    } while (numero!= 0);

    printf("A sequência de números em ordem crescente é:\n");

    for(int j = 0; j < a - 1; j++) {
        for (int k = j + 1; k < a - 1; k++) {
            if (sequencia[j] > sequencia[k]) {
                int temp = sequencia[j];
                sequencia[j] = sequencia[k];
                sequencia[k] = temp;
            }
        }
        printf("%d ", sequencia[j]);
    }

    printf("\nA sequência de números em ordem decrescente é:\n");

    for(int j = a - 2; j >= 0; j--) 
    {
        printf("%d ", sequencia[j]);
    }

    return 0;
}