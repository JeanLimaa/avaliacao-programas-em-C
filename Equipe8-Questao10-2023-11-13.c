#include <stdio.h>

int main() {
    int matricula, horas_trabalhadas, valor_horas_trabalhadas = 35;
    float inss = 0.085, sindicato = 0.012, plano_de_saude = 0.06, salario_bruto, salario_liquido;
    char nome[20];
    
    while(1){
        printf("Digite sua matrícula de 4 dígitos (0 pra sair): ");
        scanf("%d", &matricula);
        
        printf("Digite seu nome: ");
        scanf("%s", &nome);
        
        if(matricula == 0) {printf("Finalizando..."); break;}
        else if(matricula > 9999) {printf("Matricula invalida\n"); break;}
        
        printf("Total de horas trabalhadas: ");
        scanf("%d", &horas_trabalhadas);
        
        salario_bruto = valor_horas_trabalhadas * horas_trabalhadas;
        
        inss = inss * salario_bruto;
        sindicato = sindicato * salario_bruto;
        plano_de_saude = plano_de_saude * salario_bruto;
        
        salario_liquido = salario_bruto - inss - sindicato - plano_de_saude;
        
        printf("O salário bruto de %s é: %.2f\n", nome, salario_bruto);
        printf("O salário liquido de %s é: %.2f\n\n", nome, salario_liquido);
    }

    return 0;
}