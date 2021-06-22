#include <stdio.h>
#include <iso646.h>

main(){
	unsigned long int numero;
	printf("Informe o numero:\n");
	scanf("%d", &numero);
	//O numero para ser válido precisa ser maior que 0 e par
	if(numero > 0 and numero%2 == 0){
			printf("Numero eh par e positivo, valido!\n");
	}else{
		printf("Numero inválido...");
	}
}
