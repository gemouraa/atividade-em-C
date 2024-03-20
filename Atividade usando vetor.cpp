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
	int vetor[3];
	int i,soma,media,contador;
	
	printf("Digite os elementos do vetor:\n");
	for(i= 0; i < 3; i++){
		cabecalho();
		printf("Elemento %d:", i +1);
		scanf("%d",&vetor[i]);
		soma += vetor[i];
		contador++;
	}
	
	for (i = 0; i < 3; i++){
		printf("Elemento %d: %d\n",i+1,vetor[i]);
	}
	media = soma / contador;

	printf("\nMédia: %i", media);
	
	if (media >= 7){
		printf("\nAprovado");
	}
	if (media >= 5 && media < 7){
		printf("\nRecuperação");
	}
	if (media < 5){
		printf("\nReprovado");
	}
	return 0;
}
