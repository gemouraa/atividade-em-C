#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

void cabecalho () {
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}  

int main (){
	setlocale(LC_ALL,"");
	int numero ,par = 0,impar = 0,soma = 0, contador = 0, contadorPar,contadorImpar, verif;
	float mediaGeral = 0,mediaPares = 0 ;
	//Elaborando as perguntas
	cabecalho();
	printf("Digite um n�mero:");
	scanf("%i",&numero);
	
	//elaborando o la�o de repeti��o
	
while(numero != 0){
	if(numero > 0){
		contador++;
		soma += numero;
	}
	if (numero % 2 == 0){
		par += numero;
		contadorPar++;
	}
	else{ contadorImpar ++;
	} 	
	cabecalho();
	printf("Digite um n�mero:");
	scanf("%i",&numero);
	}
	//Verificando Par e impar e contando
//Calculando as M�dias
	mediaGeral = soma / (float)contador;
	mediaPares = par / (float)contadorPar;
	//Exibindo informa��es Finais
	cabecalho();
	printf("N�meros Pares: %i", contadorPar);
	printf("\nN�meros Impares: %i", contadorImpar);
	printf("\nM�dia Geral: %.2f",mediaGeral);
	printf("\nMedia Pares: %.2f",mediaPares);
	
	return 0;

	
}
