#include <stdlib.h>
#include <stdio.h>

void cabecalho (){
	printf("=====SENAI=====");
	system("cls || clear");
}
int main () {
	char nome[50] ;
	int primeiraNota, segundaNota, terceiraNota, quartaNota, media;
	
	//Exibindo dados
	
	cabecalho();
	printf("\nDigite seu nome:");
	scanf("%s",&nome);
	
	cabecalho();
	printf("\nDigite sua primeira nota:");
	scanf("%i",&primeiraNota);
	
	cabecalho();
	printf("\nDigite sua segunda nota:");
	scanf("%i",&segundaNota);
	
	cabecalho();
	printf("\nDigite sua terceira nota:");
	scanf("%i",&terceiraNota);
	cabecalho();
	
	printf("\nDigite sua quarta nota:");
	scanf("%i",&quartaNota);
	
	//calculos
	
	media = (primeiraNota + segundaNota + terceiraNota + quartaNota) / 4;
	
	//Resultados
	
	cabecalho();
	printf("\nNome: %s", nome);
	printf("\nPrimeira Nota: %i", primeiraNota);
	printf("\nSegunda Nota: %i", segundaNota);
	printf("\nTerceira Nota: %i", terceiraNota);
	printf("\nQuarta Nota: %i", quartaNota);
	printf("\nMedia: %i", media);
	
	return 0;
}
