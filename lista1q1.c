#include <stdio.h>

int main(){

int i = 3, j=5;
int *p, *q;

p = &i;  // p guarda o endereo de i
q= &j; // q guarda o endereo de j

printf("%p\n",q); // valor do end de j

p == &i; //p e igual ao endereo de i!

printf("%p\n",p); // valor do end de i
}
