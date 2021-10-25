#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int num, i, resto = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++){
    	if(num % i == 0){
    		resto++;
		}
	}
	if(resto == 2){
		printf("O numero %d e primo", num);
	}else{
		printf("O numero %d nao e primo", num);
	}
}
