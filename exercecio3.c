#include <stdlib.h>
#include <stdio.h>

int main() {
	int numero, divisao;
	
	printf("Digite um Numero:");
	scanf("%i",&numero);
	
	divisao = numero % 2;
	if (divisao == 0 ){
		printf("Esse numero e Par");
	}
	else { 
	printf("Esse numero e impar");
	}
	return 0;
	}
