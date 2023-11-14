#include <stdio.h>
#include <string.h>

void main() {
int numeros[]={2,4,35,50,23,17,9,12,27,5,14,2,3,4,1,2,5,6,8,9};
int subprimos[20], contadorprimo = 0;
float media = 0, mediap = 0, somat = 0, somati = 0, normalizados[20], maior = 0;
for (int i = 0; i < 20; i++){
    if(numeros[i]>maior)maior = numeros[i];
    somat += numeros[i];
    somati += numeros[i] * i;
}
  
  for (int i = 0; i < 20; i++){
      int primo = 0;
  if (numeros[i] == 0 || numeros[i] == 1){
      primo = 1;
      continue;
  }
  for (int k = 2; k <= numeros[i] / 2; k++) {
    if (numeros[i] % k == 0) {
      primo = 1;
      break;
    }
  }
      if (primo == 0) {
           subprimos[contadorprimo] = numeros[i];
           contadorprimo++;
      }
  }
  for(int i = 0; i < 20; i++){
      normalizados[i] = numeros[i]/maior;
  }
media = somat/20;
mediap = somati/somat;
printf("Maior valor: %d\n", maior);
printf("Media dos valores: %f\n", media);
printf("Sub conjunto de valores primos: ");
for(int i = 0; i < contadorprimo; i++) printf("%d ",subprimos[i]);
printf("\nMedia ponderada dos numeros: %f\n",mediap);
printf("Numeros normalizados: ");
for(int i = 0; i < 20; i++) printf("%.2f ",normalizados[i]);
}