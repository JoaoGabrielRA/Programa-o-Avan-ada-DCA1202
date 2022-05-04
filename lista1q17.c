#include <stdio.h>

int main(void){
    int n;
    printf("Entre com o tamanho do vetor: \n",n);
    scanf("%d",&n);
    printf("valor de n: %d\n",n);
    int vet1[n],vet2[n],vet3[n],i;
    for(i=0;i<n;i++){
        printf("Entre com o %d¼ elemento do primeiro vetor: ",i+1);
        scanf("%d",&vet1[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("Entre com o %d¼ elemento do segundo vetor: ",i+1);
        scanf("%d",&vet2[i]);
    }
    printf("\n\nSoma dos vetores: ");
    for(i=0;i<n;i++){
        vet3[i]=vet1[i]+vet2[i];
        printf("%d ",vet3[i]);
    }
    printf("\n\n");
    return 0;
}
