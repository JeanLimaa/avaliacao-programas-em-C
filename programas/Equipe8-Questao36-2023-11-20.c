{
    float matriza[5][5], matrizb[5][5], somaa = 0, somab = 0,somada = 0 ,somadb = 0, somamatrizes[5][5],multiplicacaomatriz[5][5];
  for(int i=0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Entre com o elemento da Matriz A %d,%d: ",i + 1, j + 1);
            scanf("%f",&matriza[i][j]);
            somaa += matriza[i][j];
        }
    }
    for(int i=0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Entre com o elemento da Matriz B %d,%d: ",i + 1, j + 1);
            scanf("%f",&matrizb[i][j]);
            somab += matrizb[i][j];
        }
    }
     printf("Matriz somada: \n");
     for(int i=0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i==5)printf("\n");
            printf("%.2f ",matriza[i][j]+matrizb[i][j]);
        }}
    printf("\nMultiplicacao das matrizes: \n");
        for(int i=0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i==5)printf("\n");
            printf("%.2f ",matriza[i][j]*matrizb[j][i]);}}

            
    printf("\nSoma das diagonais das duas matrizes: %.2f",somaa+somab);
}