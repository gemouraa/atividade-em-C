#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int mediar(int n1, int n2) {
	int media;
	media = (n1 + n2) / 2;
	printf("\nMédia: %i \n", media); 
	return media;
}
int main() {
	setlocale(LC_ALL, "");
	int primeiroNumero, segundoNumero, soma, media;
	
	printf("Digite o primeiro número:");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo número:");
	scanf("%i",&segundoNumero);
	
	media = mediar(primeiroNumero, segundoNumero);
	
	return 0;
	
}
