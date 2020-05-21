#include <stdio.h>

int main(void) {
  int num[5];
  int frequencia[6];
  
  //Inicializa Posição do Dados
  for(int i=0; i<6; i++){
    frequencia[i]=0;
  }
  //Fim Inicialização
  
  for(int i = 0; i < 5;i++){
    printf("\n Informe o número sorteado: ");
    scanf("%d", &num[i]);
    frequencia[num[i]-1]++;
  }
  for(int i = 0; i<6;i++){
    if(frequencia[i]>0){
    printf("\n O número %d foi sorteado %d vezes",i+1, frequencia[i]);
    }
  }
return 0;
#include <stdio.h>

int main(void) {
  int num[5];
  int frequencia[6];
  
  //Inicializa Posição do Dados
  for(int i=0; i<6; i++){
    frequencia[i]=0;
  }
  //Fim Inicialização
  
  for(int i = 0; i < 5;i++){
    printf("\n Informe o número sorteado: ");
    scanf("%d", &num[i]);
    frequencia[num[i]-1]++;
  }
  for(int i = 0; i<6;i++){
    if(frequencia[i]>0){
    printf("\n O número %d foi sorteado %d vezes",i+1, frequencia[i]);
    }
  }
return 0;
}