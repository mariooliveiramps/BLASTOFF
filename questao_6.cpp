#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int duracao (int x, int y){
	int t;
	if(y <= x) y += 24;
	t = y - x;
	return t;
}

int main() {
	int ini, fim;
	
	printf("Em qual horario iniciou o jogo? ");	
	scanf("%d", &ini);
	printf("Em qual horario terminou o jogo? ");	
	scanf("%d", &fim);
	
	printf("O jogo durou %d hora(s)", duracao(ini, fim));
}
