#include <stdio.h>

int main() {
    int num, soma_par, produto_impar = 1, soma_tudo = 0;
    
    while(1){
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);
        
        if(num == 0){
            printf("Finalizando...\n");
            printf("A soma dos números pares é: %d\n", soma_par);
            printf("O produto dos números impares é: %d\n", produto_impar);
            printf("A soma de todos os números digitados é: %d", soma_tudo);
            break;
        } else if(num%2==0){
            printf("%d é par.\n", num);
            soma_par = soma_par + num;
        } else{
            printf("%d é impar.\n", num);
            if(num != 0) produto_impar = produto_impar * num;
        }
        
        soma_tudo = soma_tudo + num;
    }

    return 0;
}