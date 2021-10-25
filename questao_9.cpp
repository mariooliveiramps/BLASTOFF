#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int numero, i=0;
    
    printf("Digite o numero da tabuada que deseja: ");
    scanf("%d", &numero);
    printf("--------------Tabuada------------\n");
    
    for(i=0; i<=10; i++){
    	printf("%d x %d = %d\n", numero, i, numero*i);
	}
	printf("---------------------------------\n");
}
