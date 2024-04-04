#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 2
void cabecalho () {
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}  
int main () {
	setlocale(LC_ALL, "");
	char alunos[4][200];
	int numeros[4][3],media[4],soma = 0;
	int l,c;
	
	for(l = 0;l < 4;l++){
		printf("Digite o nome do %d aluno:",l + 1);
		scanf("%s",&alunos[l]);
		for(c = 0;c < 3;c++){
			printf("Coloque a 1º Nota:",c+1);
			scanf("%d",&numeros[l][c]);
			soma += numeros[l][c];
		}
		media[l] = soma / c;
		soma = 0;
	}
	printf("\n");
	cabecalho();
	for(l = 0;l < 4;l++){
		printf("%dº aluno: %s\n",l+1,alunos[l]);
		for(c = 0;c < 3;c++){
			printf("%dºNota: %d\n",c+1, numeros[l][c]);
		}
		printf("Média do %iº aluno: %d \n",l + 1,media[l]);
		printf("\n");	
	}
	

	return 0;
}
