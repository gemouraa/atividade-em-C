#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	char nome[200];
	char sexo;
	int idade;
	float peso;
	
	printf("Digite seu nome:");
	scanf("%s",&nome);
	
	fflush(stdin);
	
	printf("Digite sua idade:");
	scanf("%i",&idade);
	
	fflush(stdin);
	
	printf("Digite seu sexo, sendo (M) masculino e (F) feminino:");
	scanf("%c",&sexo);
	
	printf("Digite seu peso:");
	scanf("%f",&peso);
	
	
	printf("=========Exibindo Dados=======\n");
	printf("Nome: %s \n", nome);
	printf("Idade: %i \n", idade);
	printf("sexo: %c \n", sexo);
	printf("Peso: %f \n", peso);
}
