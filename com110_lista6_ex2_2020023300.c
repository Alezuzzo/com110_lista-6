#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num[9];
  char gabarito[7], resposta[7];
  int j=0, i=0, f=0;
  float nota=0;
  int aprovados=0;
  
  printf("Respostas em A, B, C e D.\n");
  
  for(i=0; i<8; i++){
    printf("\nGabarito da questão %d: ", i+1);
    scanf(" %c", &gabarito[i]);
  }
  
  for(j=0; j<10; j++){
  printf("\nAluno número: ");
  scanf("%d", &num[j]); 
  nota=0;
  i=0;
    for(i=0; i<8; i++){
    printf("\nResposta da questão %d: ", i+1);
    scanf(" %c", &resposta[i]);
    if(resposta[i] == gabarito[i]){
      nota++;
    }
  }
  if(nota>=6.0){
    aprovados++;
  }
  printf("\nNota do aluno %d: %.1f", num[j], nota);
  printf("\n");
  }
  printf("\n");
  printf("\nForam aprovados %d %% dos alunos.", aprovados*10);
}