#include <stdio.h>

main(){
	float nota[10], media=0, soma=0;
	int c=0;
	while(c<10){
		printf("Favor insira as notas: \n");
		scanf("%f", &nota[c]);
		soma = soma + nota[c];
		c++;
	}
	media = soma / 10;
	c=0;
	while(c<10){
		printf("\nNotas: %.2f", nota[c]);
		c++;
	}
	printf("\nMédia: %.2f", media);
}
