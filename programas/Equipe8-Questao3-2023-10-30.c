#include <stdio.h>

int main() {
    int acc; //acumulador
    int numbers; //números
    int length;
    
    while(1){
        printf("Número (0 para parar): ");
        scanf("%d", &numbers);
        if (numbers != 0) {
            acc = numbers + acc;
            length++;
        }
        else {
            printf("A soma dos números é: %d\n", acc);
            printf("A quantidade de números é: %d\n", length);
            return 0;
        }
    }

    return 0;
}