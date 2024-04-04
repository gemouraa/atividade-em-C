#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

void cabecalho () {
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}  
int main () {
	setlocale(LC_ALL, "");
	int numeros[2][2];
	int l,c;
	
	for(l = 0;l < 2;l++){
		for(c = 0;c < 2;c++){
			printf("Número da linha %d coluna %d:",l+1,c+1);
			scanf("%d",&numeros[l][c]);
		}
	}
	cabecalho();
	for(l = 0;l < 2;l++){
		for(c = 0;c < 2;c++){
			printf("Número da linha %d coluna %d: %d\n",l+1,c+1,numeros);
		}
	}
	return 0;
}
