
#include <stdio.h>

int main(){

float aloha[10], coisas[10][5], *pf, value = 2.2; int i=3;

aloha[2] = value;
scanf("%f", &aloha);
aloha = value; // precisa ser especificado o local no vetor aloha para guardar o valor
printf("%f", aloha);
coisas[4][4] = aloha[3];
coisas[5] = aloha; // precisa especificar a posicao [x][y] para guardar valores na variavel coisas
     pf = value; // pf aponta para memorias, precisa adicionar o &
     pf = aloha;

//
}
