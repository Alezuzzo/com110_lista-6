#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 8

int main()
{
  float vet[N], aux;
  int i, j;

  for(i=1; i<=N; i++){
    printf("Valor %d: ", i);
    scanf("%f", &vet[i]);
  }  

  
  for(i=0; i<=N; i++){
    for(j=i+1; j<=N; j++){
      if(vet[i]>vet[j]){
        aux=vet[i];
        vet[i]=vet[j];
        vet[j]=aux;
      }
    }
  }  

  return 0;
}