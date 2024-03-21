#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 6

void cabecalho () {
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}  
int main () {
	setlocale(LC_ALL, "");
	int vetor[6];
	int i,contadorImpar = 0,contadorPar = 0,divisao = 0;
	
	printf("Digite os elementos do vetor:\n");
	for(i= 0; i < TAM; i++){
		cabecalho();
		printf("Elemento %d:", i +1);
		scanf("%d",&vetor[i]);
	    vetor[i] % 2 == 0 ? contadorPar++ : contadorImpar ++;
 }
	cabecalho();
	for (i = 0; i < TAM; i++){
		printf("Elemento %d: %d\n",i+1,vetor[i]);
	}
	
	printf("\nNúmeros Pares: %i", contadorPar);
	printf("\nNúmeros Impares: %i", contadorImpar);

	return 0;
}
