#include <stdio.h>
#include <stdlib.h>

#define op1 1
#define op2 2
#define op3 3
#define op4 4

//Este é um comentário que não será lido pelo compilador
/*
	Programa calculadora
*/
main(){
	float num1=0, num2=0, resultado=0;
	int opcao;
	printf("Informe o valor 1: \n");
	scanf("%f",&num1);
	printf("Informe o valor 2: \n");
	scanf("%f", &num2);
	printf("Escolha o calculo: \n");
	printf("1- Soma\n");
	printf("2- Subtracao\n");
	printf("3- Multiplicacao\n");
	printf("4- Divisao\n");
	printf("5- Sair\n");
	scanf("%d", &opcao);
	if(opcao == op1){
		resultado = num1+num2;
	}else if(opcao == op2){
		resultado = num1-num2;
	}else if(opcao == op3){
		resultado = num1 * num2;
	}else if(opcao == op4){
		if(num2 == 0){
			printf("Nao existe divisao por 0...\n");
		}else{
			resultado = num1 / num2;
		}
	}else{
		printf("Saindo...\n");
	}
	printf("O resultado eh %f\n", resultado);
	system("PAUSE");
}
