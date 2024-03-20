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
	int vetor[5];
	int i,maiorNumero = 0,menorNumero = 999;
	
	printf("Digite os elementos do vetor:\n");
	for(i= 0; i < 5; i++){
		cabecalho();
		printf("Elemento %d:", i +1);
		scanf("%d",&vetor[i]);
		
		if( vetor[i] > maiorNumero){
			maiorNumero = vetor[i];
		}
		if (vetor[i] < menorNumero){
			menorNumero = vetor[i];
		}
	}
	cabecalho();
	for(i = 0; i < 5; i++){
		printf("Elemento %d: %d\n",i+1,vetor[i]);	
	}
		
		printf("\nMaior Número %i",maiorNumero);
		printf("\nMenor Número %i",menorNumero);
	
	return 0 ;	
	}
