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
	int numero,contador,soma,media;
	
		cabecalho();
		printf("Digite um n�mero:");
		scanf("%i",&numero);
		
		
		while(numero > 0 ){ 
		
		contador++;
		
		soma += numero;
	
		media = soma / contador;
		
	}
		
		printf("M�dia: %i", media);
		
		return 0;
	}
