#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
void cabecalho(){
	system("cls || clear");
	printf("=====SENAI=====\n");
	fflush(stdin);
	
	
}
int main () {
	setlocale(LC_ALL,"");
	char nome[200];
	int primeiraNota, segundaNota, terceiraNota, media;
	
	//elaborando perguntas
	
	cabecalho();
	printf("Digite seu nome:");
	scanf("%s",&nome);
	
	cabecalho();
	printf("Digite sua primeira nota:");
	scanf("%i",&primeiraNota);
	
	cabecalho();
	printf("Digite sua segunda nota:");
	scanf("%i",&segundaNota);
	
	cabecalho();
	printf("Digite sua terceira nota:");
	scanf("%i",&terceiraNota);
	
	//calcuolos
	
	media = (primeiraNota + segundaNota + terceiraNota) / 3;
			

	//dados ao usuario
	
	cabecalho();
	printf("Nome: %s", nome);
	printf("\nPrimeira Nota: %i", primeiraNota);
	printf("\nSegunda Nota: %i", segundaNota);
	printf("\nTerceira Nota: %i", terceiraNota);
	printf("\nMédia: %i", media );
	
	
	if (media < 7){
		
		printf("\nReprovado!");
	}

	else {
		printf("\nAprovado!");
	}
	
	
	return 0;
}
