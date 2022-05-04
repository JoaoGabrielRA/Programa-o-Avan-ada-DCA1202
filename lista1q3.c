#include <stdio.h>

int main(){

int i,j;
int *p, *q;

    p = i; //p precisa guardar o endereo de i
    q = &j;
    p = &*&i;
    i = (*&)j; // precisa remover o parenteses para que possa ser guardado o valor de j
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q;
}
