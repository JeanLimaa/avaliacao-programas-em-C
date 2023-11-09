#include <stdio.h>
#include <math.h>

int main() {
    float equacao, resultado;
    float euler = 2.71; //valor aproximado em duas casas decimais
    
    for(int i = 1; i <= 6; i++){
        equacao = pow(i, 2 * i) + pow(euler, i)*i*sin(2*i);
        resultado += equacao;
    }
        printf("Resultado do somatorio: %.2f\n\n", resultado);
    return 0;
}