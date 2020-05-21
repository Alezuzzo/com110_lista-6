#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  char palavra[15];
  char alf[]="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
  char codi[15];

  printf("\n");
  printf("Digite o número para trocar de posição em código de césar:");
  scanf("%d", &num);
  printf("Digite a palavra para ser codificada: ");
  scanf("%s", &palavra);

  for(int i=0; i<15;i++){
    for(int j=0; j<52; j++){
      if(palavra[i]==alf[j]){
        codi[i]=alf[j+num];
      }
    }
  }
  printf("A palavra codificada: %s",codi);

return 0;
}