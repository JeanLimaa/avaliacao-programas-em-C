#include <stdio.h>

void main() {
    int idade;
    char telefone[12];
    char nome [100];
    char endereco [100];
    
    printf("Digite seu nome: ");
    gets (nome);
    printf("Digite seu endereço: ");
    gets (endereco);
    printf("Digite seu telefone: ");
    gets (telefone);
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    printf("Seu nome é %s, voce tem %d anos, mora na rua %s, e seu telefone é %s",nome,idade,endereco,telefone);


}