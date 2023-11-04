// Online C compiler to run C program online
#include <stdio.h>

void main() {
int numero, maior = 0;
    do {
        printf("Digite uma sequencia de numeros e a termine com 0 para finalizar: ");
        scanf("%d", &numero);

        if(numero > maior) {
            maior = numero;
        }
    } while(numero != 0);
    if(maior != 0) {
        printf("O maior número digitado é: %d\n", maior);
    } else {
        printf("A sequencia nao pode começar com 0.\n");
    }
}