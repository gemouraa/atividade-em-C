#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 3


void cabecalho () {
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}  
int main () {
	setlocale(LC_ALL, "");
	int i, numero[TAM], contadorNegativo = 0;
	float soma = 0;
	printf("Digite os elementos do vetor:\n");
	for(i= 0; i < TAM; i++){
		cabecalho();
		printf("Digite um número:", i +1);
		scanf("%d",&numero[i]);
	if(numero[i] < 0){
	contadorNegativo++;}
	if(numero[i] > 0 ){
	 soma += numero[i];}
 }
 	cabecalho();
	for (i = 0; i < TAM; i++){
		printf("Elemento %d: %d\n",i+1,numero[i]);
	}
	printf("\nQuantidade de Número Negativos:  %i",contadorNegativo);
	printf("\nSoma dos números positivos: %.1f", soma);
	
	return 0;
}
