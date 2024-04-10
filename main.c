#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 3
void cabecalho () {
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}  
int main () {
	setlocale(LC_ALL, "");
	char disciplina[TAM][200];
	float numeros[TAM][TAM],media[TAM],soma = 0, peso[3], somaTotal = 0, somaPeso = 0, multi = 0;
	int l,c,p;
	
	cabecalho();
	for(l = 0;l < TAM;l++){
		printf("Digite o nome da %d disciplina:",l + 1);
		scanf("%s",&disciplina[l]);
		for(c = 0;c < TAM;c++){
		    printf("Coloque a %dº Nota:",c+1);
			scanf("%f",&numeros[l][c]);
			while(numeros[l][c] < 0 || numeros[l][c] > 10){
		    printf("Número Invalido\n");
			printf("Coloque a %dº Nota:",c+1);
			scanf("%f",&numeros[l][c]);
			}
			printf("Digite o peso da prova:",p+1);
			scanf("%f",&peso[c]);
			while(peso[c] < 0 || peso[c] > 10){
			printf("Número Invalido\n");
			printf("Digite o peso da prova:",p+1);
			scanf("%f",&peso[c]);
			}
			multi = numeros[l][c] * peso[c];
			somaTotal += multi;
			somaPeso += peso[c];
}
		
	    	media[l] = somaTotal / somaPeso;	
	    	somaTotal = 0;
	    	somaPeso = 0;
	    	multi = 0;
	}  

	printf("\n");
	cabecalho();
	for(l = 0;l < TAM;l++){
		printf("%dº Disciplina: %s\n",l+1,disciplina[l]);
		for(c = 0;c < TAM;c++){
			printf("%dºNota: %.1f\n",c+1, numeros[l][c]);
			
		}
		printf("Média: %.1f \n",media[l]);
	
		printf("\n");
	}
	

	return 0;
}
