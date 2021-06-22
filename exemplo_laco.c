#include <stdio.h>
//Exemplo laço de repetição
main(){
	int contar=0;
	
	while(contar < 10){
		printf("%d", contar);
		contar = contar + 1;
	}
	contar = 0;
	printf("\n");
	do{
		printf("%d", contar);
		contar++;
	}while(contar < 10);
	printf("\n");
	for(contar=0; contar < 10; contar++){
		printf("%d", contar);
	}
}
