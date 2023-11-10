#include <stdio.h>

void main() {
    float matriz[5][3], media = 0, transposta[3][5];
    float soma = 0;
    for(int i=0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("Entre com o elemento %d,%d: ",i + 1, j + 1);
            scanf("%f",&matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    media = soma/15;
    printf("Soma de todos os elementos: %.2f\n",soma);
    
    for(int i=0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            printf("Elemento da transposta %d,%d: %.2f\n",j + 1,i + 1,matriz[j][i]);
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){ 
            printf("Elemento somado a media %d,%d: %.2f\n", i + 1, j + 1, matriz[i][j]+media);
    }
}
}