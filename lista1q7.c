#include <stdio.h>

int main(){
int mat[4], *p, x;


p = mat + 1; // p recebe a posição 2 do vetor mat - valida
p = mat++; // p recebe a posição 2 do vetor mat - valida
p = ++mat; // p recebe a posição 2 do vetor mat - valida
x = (*mat)++; // o conteudo da posicao 0 de mat e incrementado em 1
}
