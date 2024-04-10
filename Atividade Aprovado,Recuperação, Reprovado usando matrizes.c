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
	char disciplina[3][200];
	int numeros[3][2],media[3],soma = 0;
	int l,c;
	
	for(l = 0;l < 3;l++){
		printf("Digite o nome da %d disciplina:",l + 1);
		scanf("%s",&disciplina[l]);
		for(c = 0;c < 2;c++){
			printf("Coloque a %dº Nota:",c+1);
			scanf("%d",&numeros[l][c]);
			soma += numeros[l][c];
		}
		media[l] = soma / c;		
		soma = 0;
	}
	printf("\n");
	cabecalho();
	for(l = 0;l < 3;l++){
		printf("%dº Disciplina: %s\n",l+1,disciplina[l]);
		for(c = 0;c < 2;c++){
			printf("%dºNota: %d\n",c+1, numeros[l][c]);
		}
		printf("Média da %iº Disciplina: %d \n",l + 1,media[l]);
		if(media[l] < 5){
			printf("Reprovado\n");
			}
		if(media[l] >= 5 && media[l] < 7){
			printf("Recuperação\n");
		}
		if(media[l] >= 7){
			printf("Aprovado\n");
			}
			
		
	}
	

	return 0;
}
