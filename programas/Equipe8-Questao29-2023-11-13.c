#include <stdio.h>

void main() {
    int idade;
    char telefone[12];
    char nome [100];
    char endereco [100];

    printf("Digite seu nome: ");
    scanf("%99s",&nome);
    getchar();
    printf("Digite seu endereço: ");
    scanf("%99s",&endereco);
    getchar();
    printf("Digite seu telefone: ");
    scanf("%11s",&telefone);
    getchar();
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("Seu nome é %s, voce tem %d anos, mora na rua %s, e seu telefone é %s",nome,idade,endereco,telefone);


}