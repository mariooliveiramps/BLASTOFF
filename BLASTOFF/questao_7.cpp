#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int par[5], n, i = 0, pares = 0, j=0, a;
    
    for(j = 0; j < 5; j++) {
    	scanf("%d", &n);
    	if(n % 2 == 0){
    		par[pares] = n;
    		pares++;
    	}
    }
    for(a = 0; a < pares; a++){
    	printf("par[%d] = %d\n", a, par[a]);
    }
}
