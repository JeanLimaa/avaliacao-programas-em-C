#include <stdio.h>

int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }
    
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; // Encontrou um divisor, não é primo
        }
    }
    
    return 1; // Se nenhum divisor foi encontrado, é primo
}

int main() {
    int numero;
    int quantidadePrimos = 0;

    while (1) {
        printf("Digite um número (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (ehPrimo(numero)) {
            printf("%d é um número primo.\n", numero);
            quantidadePrimos++;
        } else {
            printf("%d não é um número primo.\n", numero);
        }
    }

    printf("Quantidade de números primos encontrados: %d\n", quantidadePrimos);

    return 0;
}