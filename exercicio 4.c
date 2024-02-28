#include <stdlib.h>
#include <stdio.h>
void cabecalho (){
	system("cls || clear");
	printf("=====SENAI=====\n");
}
int main() {
	int numero, soma, sub; 
	cabecalho();
	printf("Digite um Numero:");
	scanf("%i",&numero);
	
	soma = numero + 1;
	sub = numero - 1;
	
	cabecalho();
	printf("Numero escolhido: %i", numero);
	printf("\nAntecessor : %i", sub);
	printf("\nSucessor : %i", soma);

	return 0;
	}
