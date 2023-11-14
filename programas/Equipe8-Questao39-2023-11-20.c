#include <stdio.h>
#include <string.h>

void main() {
char frase[101];
char letra;
int cletra;
    printf("Digite uma frase com o máximo de 100 caracteres: ");
    gets(frase);
    if (strlen(frase) > 100) frase[101] = 0;
    printf("Digite a letra que quer contar na frase: ");
    letra = getchar();
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == letra) {
            cletra++;
        }}
        printf("A letra '%c' aparece %d vezes na frase.\n", letra, cletra);
}