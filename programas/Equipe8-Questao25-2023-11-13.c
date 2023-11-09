#include <stdio.h>

// Função para calcular o fatorial de um número
int calcularFatorial(int num) {
    if (num == 0 || num == 1) {
        return 1; // O fatorial de 0 e 1 é 1
    } else {
        return num * calcularFatorial(num - 1); //função recursiva para calcular o fatorial
    }
}

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Só é possivel calcular o fatorial de números naturais.\n");
    } else {
        printf("O fatorial de %d é: %d\n", num, calcularFatorial(num));
    }

    return 0;
}
