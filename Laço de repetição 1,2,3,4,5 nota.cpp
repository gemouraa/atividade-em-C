#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void cabecalho() {
system("cls || clear");
printf("\n=== SENAI ===\n");
fflush(stdin);
}

int main() {
setlocale(LC_ALL, "");

int nota, soma, i;

for (i = 1; i <= 5; i++){
printf("Digite a %iª nota: ", i);
scanf("%i",&nota);


soma = soma + nota;
}

cabecalho();
printf("\nSoma: %i \n", soma);

