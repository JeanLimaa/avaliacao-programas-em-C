#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int matricula, totalAlunos = 0;
    float nota1, nota2, nota3;
    float media, mediaTurma = 0;

    while (1) {
        printf("Digite o nome do aluno (ou 'sair' para encerrar): ");
        scanf("%s", nome);
        if (strcmp(nome, "sair") == 0) {
            break;
        }
        
        printf("Digite a matrícula do aluno: ");
        scanf("%d", &matricula);
        for(int i = 1; i < 4; i++){
          printf("Digite as %dª nota do aluno: ", i);
          if(i == 1) scanf("%f", &nota1);
          if(i == 2) scanf("%f", &nota2);
          if(i == 3) scanf("%f", &nota3);
        }
        media = (nota1 + nota2 + nota3) / 3;
        mediaTurma += media;
        totalAlunos++;

        printf("Aluno: %s\n", nome);
        printf("Matrícula: %d\n", matricula);
        printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
        printf("Média: %.2f\n", media);

        if (media >= 7.0) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }
    }

    if (totalAlunos > 0) {
        float mediaGlobal = mediaTurma / totalAlunos;
        printf("\nMédia de notas da turma: %.2f\n", mediaGlobal);
    } else {
        printf("\nNenhum aluno foi inserido.\n");
    }

    return 0;
}