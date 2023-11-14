#include <stdio.h>
#include <string.h>

void main() {
char lista[64][9];
char data[11], novadata[11];
int contador = 0;
while (1){
    printf("Digite uma data no formato DD/MM/AAAA: ");
    gets(data);
    if(strcmp(data,"0/0/0") == 0 || contador >= 64){break;}
    strncpy(lista[contador], &data[6], 4);
    strncat(lista[contador], &data[3], 2);
    strncat(lista[contador], &data[0], 2);
    contador++;
}
char aux[11];
for(int i = 0; i < contador; i++){
    for(int k=i + 1;k<contador;k++){
        if (strcmp(lista[i], lista[k])>0){
            strcpy(aux, lista[i]);
            strcpy(lista[i], lista[k]);
            strcpy(lista[k], aux);
    }
}
}
printf("Datas ordenadas: \n");
for(int i=0;i<contador;i++){
    strncpy(novadata, &lista[i][6],2);
    novadata[2] = '\0';
   strcat(novadata, "/");
    strncat(novadata, &lista[i][4],2);
    strcat(novadata, "/");
    strncat(novadata, &lista[i][0],4);
    printf("%s\n",novadata);
}
}