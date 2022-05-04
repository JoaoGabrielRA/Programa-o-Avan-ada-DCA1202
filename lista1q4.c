 #include <stdio.h>

int main() {
int valor; int *p1; float temp; float *p2;
char aux;
char *nome = "Ponteiros"; char *p3;
int *p4; int *p5;
int idade;
int vetor[3];


/* (a) */
valor = 10;
p1 = &valor;
*p1 = 20;
printf("%d \n", valor);

// p1 aponta para o edereço de a e guarda no local o valor do inteiro 20;

/* (b) */
temp = 26.5;
p2 = &temp;
*p2 = 29.0;
printf("%.1f \n", temp);

// p1 aponta para o edereço de a e guarda no local o valor do inteiro 20;

/* (c) */
p3 = &nome[0];
aux = *p3;
printf("%c \n", aux);

// p3 guarda o endereço do primeiro caracter do char que esta guardado em nome e aux aponta para o endereço de numero 0, ou seja, P

/* (d) */
p3 = &nome[4];
aux = *p3;
printf("%c \n", aux);

// p3 guarda o endereço do primeiro caracter do char que esta guardado em nome e aux aponta para o endereço de numero 0, ou seja, e.

/* (e) */
p3 = nome;
printf("%c \n", *p3);

// responder

/* (f) */
p3 = p3 + 4; printf("%c  \n", *p3);

// p3 vai receber a posição 3 mais 4 posições a frente, ou seja, e.

/* (g) */
p3--;
printf("%c \n", *p3);

// p3 recebe a posição 5 menos uma. Ou seja, t.

/* (h) */
vetor[0] = 31;
vetor[1] = 45;
vetor[2] = 27;
p4 = vetor;
idade = *p4;
printf("%d \n", idade);

// idade vai recebr o valor que esta armazenado no primeiro endereço de vetor. 31.

/* (i) */
p5 = p4 + 1;
idade = *p5;
printf("%d \n", idade);

// p5 vai receber a posição de p4 mais uma. Ou seja, vetor[1] - 45.

/* (j) */
p4 = p5 + 1;
idade = *p4;
printf("%d \n", idade);

// p4 vai recver a posicao de p5 mais 1. Ou seja, vetor[2] = 27.

/* (l) */
p4 = p4 - 2;
idade = *p4;
printf("%d \n", idade);

// p4 que tinha a posição 2 agora recebe a posiçao 0. vetor[0] = 31.

  /* (m) */
p5 = &vetor[2] - 1; printf("%d \n", *p5);

//p5 recebe o endereço do vetor[2] - 1, ou seja,45.

/* (n) */
p5++;
printf("%d \n", *p5); return(0);

//p5 volta a posição de vetor[2].
}
