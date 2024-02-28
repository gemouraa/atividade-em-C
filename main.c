#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void cabecalho (){
	system("cls || clear");
	printf("=====SENAI=====\n");
}

int main() {
	setlocale(LC_ALL,"");
	int primeiroNumero, segundoNumero, media, menorValor, maiorValor, produto;
	
	//eleborando as perguntas
	cabecalho();
	printf("Digite o primeiro número:");
	scanf("%i",&primeiroNumero);
	
	cabecalho();
	printf("Digite o segundo número:");
	scanf("%i",&segundoNumero);
	
	//calculos
	
	media = (primeiroNumero + segundoNumero) / 2;
	
	produto = primeiroNumero * segundoNumero;
	
	if (primeiroNumero > segundoNumero){
		maiorValor = primeiroNumero;
		menorValor = segundoNumero;
	}
	if (segundoNumero < primeiroNumero){
		maiorValor = primeiroNumero;
		menorValor = segundoNumero;
	}
	cabecalho();
	printf("Primeiro Número: %.0i ", primeiroNumero);
	printf("\nSegundo Número: %.0i \n", segundoNumero);
	printf("\nMedia: %.1i", media);
	printf("\nProduto: %.1i", produto);
	printf("\nMaior Valor: %.1i", maiorValor);
	printf("\nMenor Valor: %.1i", menorValor);
	
}