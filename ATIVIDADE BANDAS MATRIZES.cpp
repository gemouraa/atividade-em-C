#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 5
#define SIZE 3
void cabecalho () {
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}  
int main () {
	setlocale(LC_ALL, "");
	char banda[SIZE][200];
	char integrantes[SIZE][TAM][200];
	int i,j;
	
	cabecalho();
	for(i = 0;i < SIZE;i++){
		printf("Digite o nome da %dº Banda:",i + 1);
		gets(banda[i]);
		fflush(stdin);
		for(j = 0;j < TAM;j++){
			printf("Coloque o nome do %dº integrante:",j+1);
			gets(integrantes[i][j]);
		}
		fflush(stdin);
	}
	printf("\n");
	cabecalho();
	for(i = 0;i < SIZE;i++){
		printf("%dº Banda: %s\n",i+1,banda[i]);
		for(j = 0;j < TAM;j++){
			printf("%dºIntegrante: %s\n",j+1, integrantes[i][j]);
		}
	printf("\n");
		
	}
	

	return 0;
}
