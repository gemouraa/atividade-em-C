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
	int primeiraNota, segundaNota, media;
	
	cabecalho();
	printf("Digite uma nota:");
	scanf("%i",&primeiraNota);
	
	while (primeiraNota < 0 || primeiraNota > 10) {
		cabecalho();
		printf("Digite uma nota:");
		scanf("%i",&primeiraNota);
	}
	
		cabecalho();
		printf("Digite uma segunda nota:");
		scanf("%i",&segundaNota);
		
	while (segundaNota < 0 || segundaNota > 10) {
		cabecalho();
		printf("Digite uma segunda nota:");
		scanf("%i",&segundaNota);
	}
	
		media = (primeiraNota + segundaNota) / 2 ;// calculo
	
	// Resultados finais
		cabecalho();
		printf("Média: %i", media);
return 0;
}
