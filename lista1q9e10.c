
#include <stdio.h>

int main(){

int x[4]; // ocupa 2bytes

for(int i=0;i<5;i++){
    printf("%p",&x[i]);
    printf("\n");
}

// se x for char -> x+1 = 4093, x+2= 4094, x+3=4095
// se x for int -> x+1 = 4096, x+2 = 4100, x+3 = 4104;
// se x for float -> x+1 = 4100, x+2 = 4108 x+3 = 4116;
// se x for float -> x+1 = 4118, x+2 = 4134 x+3 = 4150;
}
