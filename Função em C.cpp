#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

 int multiplicar(int n1, int n2) {
	int multiplicacao;
	multiplicacao = (n1 * n2);
	printf("\nMultiplicação: %i \n", multiplicacao); 
	return multiplicacao;
}
int somar(int n1, int n2){
	int soma;
	soma = (n1 + n2);
	printf("\nSoma: %i \n", soma);
	return soma;
}
int subtrair(int n1, int n2){
	int sub;
	sub = (n1 - n2);
	printf("\nSubtração: %i \n", sub);
	return sub;
}
int dividir(int n1, int n2){
	int divisao;
	divisao = (n1 / n2);
	printf("\nDivisão: %i \n", divisao);
	return divisao;
}
int main (){
	setlocale(LC_ALL, "");
	int primeiroNumero, segundoNumero, soma, sub, divisao, multiplicacao;
	
	printf("Digite o primeiro número:");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo número:");
	scanf("%i",&segundoNumero);
	
	soma = somar(primeiroNumero, segundoNumero);
	
	sub = subtrair(primeiroNumero, segundoNumero);
	
	divisao = dividir(primeiroNumero, segundoNumero);
	
	multiplicacao = multiplicar(primeiroNumero, segundoNumero);
	return 0;
}

