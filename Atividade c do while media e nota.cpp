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
	int numero = 0,soma,contador = 0,media;
	char continua;
	
	do{
		cabecalho();
		printf("Digite um número:", numero);
		scanf("%i",&numero);
		
		fflush(stdin);
		
		printf("Deseja escrever mais uma nota?");
		scanf("%c",&continua);
		
		//contador = contador + 1 
		contador ++;
		
		//soma = soma + numero
		soma += numero;
		
		continua = toupper(continua); //converte para maiusculo

	} while (continua != 'N');
	
	media = soma / contador;
	
	cabecalho();
	printf("Média: %i", media);
	return 0;
}
