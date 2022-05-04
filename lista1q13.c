#include <stdio.h>
#include <stdlib.h>

int main(){
  int *x, n, i, aux0, aux1;
  printf("digite o tamanho: ");
  scanf("%d", &n);
  x = (int*) malloc(n*sizeof(int));

  for(i=0; i<n; i++){
    scanf("%d, ", &aux0);
    x[i] = aux0;
  }

  for(i=0; i<n; i++){
        if(x[i]>x[i+1]){
            aux1 = x[i];
            x[i] = x[i+1];
            x[i+1] = aux1;
        }

    printf("%d,", x[i]);
  }

  printf("\n");
  free(x);

  return 0;
}

