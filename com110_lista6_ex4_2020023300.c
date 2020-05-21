#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char palavra [10];

  printf("Digite uma palavra de até 10 letras: ");
  scanf("%s", palavra);

  printf("Essa palavra ao contrário fica: ");
  for(int i=9; i > -1; i--){
    printf("%c",palavra[i]);
  }


return 0;
}