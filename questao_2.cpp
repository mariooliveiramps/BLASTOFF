#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  
  float a, b, consumoMedio;

  printf("Informe o valor para A: ");
  scanf("%f", &a);
  printf("Informe o valor para B: ");
  scanf("%f", &b);

  consumoMedio = b/a;
  
  printf("O consumo medio = %.2f L/km",consumoMedio);
  
}
