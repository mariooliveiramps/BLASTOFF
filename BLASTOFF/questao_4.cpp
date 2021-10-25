#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  
  float C, F;

  printf("Informe o valor C: ");
  scanf("%f", &C);
  
  F = ((C/5)*9)+32;
  
  printf("O valor convertido em F e = %.2f", F);
}
