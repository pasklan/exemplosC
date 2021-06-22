#include <stdio.h>
//Programa que recebe 10 idades e calcula a média das idades
main(){
	float idade, soma=0;
	int i;
	for(i=1; i < 11; i++){
		printf("Digite a idade %d:\n", i);
		scanf("%f", &idade);
		soma = soma + idade;
	}
	printf("\na media das idades eh %f", soma/i);
}
