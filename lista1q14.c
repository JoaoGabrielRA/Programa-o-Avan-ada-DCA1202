#include <stdio.h>
#include <stdlib.h>

float valores[] = { 40, 10, 100, 90, 20, 0.1, 0.2, 0.3, 6};

int compare (const void * a, const void * b)
{
  return ( *(float*)a - *(float*)b );
}

int main ()
{
  int n;
  qsort (valores, 10, sizeof(float), compare);
  for (n=0; n<10; n++)
     printf ("%f ",valores[n]);
  return 0;
}
