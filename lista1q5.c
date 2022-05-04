int main(void){
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;

 printf("contador/valor/valor/endereco/endereco");

 for(i = 0 ; i <= 4 ; i++){

printf("\n i = %d " ,i); // valores de 1 a 4 para i
printf("vet[%d] = %.1f ",i, vet[i]); //valores da posicao 0 a 4 de vet
printf("*(f+%d) = %.f ",i, *(f+i)); // o valor inteiro de vet[0] somando de 1 ate 4
printf("&vet[%d] = %X ", i, &vet[i]); // o endereo de 4 em 4 bits
printf("(f+ %d) = %X ",i, f+i); // f apontando pro endereo de vet
    }

}
