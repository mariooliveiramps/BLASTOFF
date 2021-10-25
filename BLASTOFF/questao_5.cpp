#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  
  int a, b;

  printf("Informe o valor para a: ");
  scanf("%d", &a);
  printf("Informe o valor para b: ");
  scanf("%d", &b);
  
  if(a % b == 0){
		printf("sao multiplos");
  }else{
  	printf("nao sao multiplos");
  }
  
}
