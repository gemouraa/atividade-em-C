#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

void cabecalho() {
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);}
	
float calculandoMedia(float n1, float n2){
	float media;
	media = (n1 + n2) / 2;
	return media;
}	

float MaiorOuMenor(float media){
	char resultado[200];
	media < 7 ? strcpy(resultado, "reprovado") : strcpy ("aprovado";) 
	return resultado;
}

int main (){
	float primeiroNumero,segundoNumero,media,resultado,resultadoMedia,aprovacao;
	
	printf("Digite sua primeira nota:");
	scanf("%i",&primeiroNumero);
	
	printf("Digte sua segunda nota:");
	scanf("%i",&segundoNumero);
	
	resultadoMedia = calculandoMedia(primeiroNumero,segundoNumero);
	aprovacao = MaiorOuMenor(media);
	
	printf("\nPrimeira Nota: %f", primeiroNumero);
	printf("\nSegunda Nota: %f", segundoNumero);
	printf("\nMedia: %f", resultadoMedia);
	
}
