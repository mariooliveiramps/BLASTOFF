#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  
  float idadei, idadej, idadek, idadex, idadey, mediaidade;

  printf("Digite a idade de I: ");
  scanf("%f", &idadei);
  printf("Digite a idade de J: ");
  scanf("%f", &idadej);
  printf("Digite a idade de K: ");
  scanf("%f", &idadek);
  printf("Digite a idade de X: ");
  scanf("%f", &idadex);
  printf("Digite a idade de Y: ");
  scanf("%f", &idadey);

  mediaidade = (idadei + idadej + idadek + idadex + idadey)/5;
  
  printf("Media das idades = %.0f",mediaidade);
  
}
