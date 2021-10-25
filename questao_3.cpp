#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  
  int a, b, c, numMenor;

  printf("Informe o valor para a: ");
  scanf("%d", &a);
  printf("Informe o valor para b: ");
  scanf("%d", &b);
  printf("Informe o valor para c: ");
  scanf("%d", &c);
  
  if(a<b and a<c){
		numMenor = a;
		printf("a e o menor numero = %d", numMenor);
  }
  else if(b<a and b<c){
  		numMenor = b;
  		printf("b e o menor numero = %d", numMenor);
  }
  else if(c<a and c<b){
      	numMenor = c;
      	printf("c e o menor numero = %d", numMenor);
  }
  
}
