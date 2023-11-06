#include <stdio.h>

int main() {
    int numero, menor = 0;
    int soma_maior_10 = 0;
    long long produto_maior_200 = 1;

    printf("Digite um número (0 para sair): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero < menor || menor == 0) {
            menor = numero;
        }

        if (numero > 10) {
            soma_maior_10 += numero;
        }

        if (numero > 200) {
            produto_maior_200 *= numero;
        }

        printf("Digite outro número (0 para sair): ");
        scanf("%d", &numero);
    }

    printf("O menor número digitado foi: %d\n", menor);
    printf("A soma dos números maiores que 10 é: %d\n", soma_maior_10);
    printf("O produto dos números maiores que 200 é: %lld\n", produto_maior_200);

    return 0;
}