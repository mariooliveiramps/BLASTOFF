#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int total = 3, i, z, mat[total][total];
    srand(time(NULL));
    
    for(i = 0; i < total; i++){
    	for(z = 0; z < total; z++){
    		mat[i][z] = rand() % 100;
		}
	}
	
	for(i = 0; i < total; i++){
    	for(z = 0; z < total; z++){
    		printf("%d ", mat[i][z]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
}
