#include <stdio.h>

int main() {
    double valor1, valor2, resultado;
    char operador;
    
    // Leitura dos valores e do operador
    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);  //espaço antes de %c para consumir possíveis espaços em branco

    printf("Digite o segundo valor: ");
    scanf("%lf", &valor2);

    // Calcula o resultado com base no operador fornecido
    switch (operador) {
        case '+':
            resultado = valor1 + valor2;
            break;
        case '-':
            resultado = valor1 - valor2;
            break;
        case '*':
            resultado = valor1 * valor2;
            break;
        case '/':
            // Verifica se o valor não é zero antes de realizar a divisão
            if (valor1 != 0 && valor2 != 0 ) {
                resultado = valor1 / valor2;
            } else {
                printf("Erro: Divisão por zero.\n");
                return 1;  // Retorna 1 para indicar um erro
            }
            break;
        default:
            printf("Erro: Operador inválido.\n");
            return 1;  // Retorna 1 para indicar um erro
    }
    printf("Resultado: %.2lf\n", resultado);

    return 0;  // Retorna 0 para indicar sucesso
}
