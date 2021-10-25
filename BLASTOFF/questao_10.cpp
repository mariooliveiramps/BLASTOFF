#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int num, i, fat=1;
    
    printf("Informe um valor para n: ");
    scanf("%d", &num);
    
    for(i = num; i > 1; i--){
    	fat = fat*i;
	}
	
	printf("O valor do fatorial de %d e %d", num, fat);
}
