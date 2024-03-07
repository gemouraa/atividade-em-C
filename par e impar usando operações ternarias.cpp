#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void cabecalho() {
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}
void verificarParOuImpar(int numero){
	numero % 2 == 0 ? printf("Par.") :printf("Ímpar."); 
}
int main (){
	setlocale(LC_ALL, "");
	int numero;

	cabecalho();	
	printf("Digite um número:");
	scanf("%i",&numero);
	
	cabecalho();
	verificarParOuImpar(numero);
	return 0;
}
