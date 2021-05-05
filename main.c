#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char palavras[10][20];
  char letra;
  char palavrasSelecionadas[10][20];
  int cont = 0;

  for(int i = 1; i<=10; i++){
    printf("Insira o nome: \n");
    scanf("%s", palavras[i]);
  }

  printf("insira a letra: \n");
  scanf("%s", &letra);

  fflush(stdin);

  for(int i = 0; i<=10; i++){
    if(palavras[i][0]==letra){
        strcpy(palavrasSelecionadas[cont], palavras[i]);
        cont++;
    }
    printf("%s \n", palavras[i]);
  }

  printf("As palavras selecionadas sao:\n");  
  for(int i = 0; i<cont; i++){
    printf("%s ", palavrasSelecionadas[i]);
  }

  return 0;
}