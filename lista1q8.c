#include <stdio.h>

int main(){
int vet[] = {4,9,13};
int i;
        for(i=0;i<3;i++){
             printf("%X ",vet+i);
           }
}

// o programa calcula o endereo da posicao 0 de vet e retorna o endereo mais 1(4bits)

int main(){
int vet[] = {4,9,13};
int i;

 for(i=0;i<3;i++){
         printf("%d ",*(vet+i));
       }

}
 // o programa retorna os valores que est‹o armazenados na posicao 0 do vetor vet mais i.


