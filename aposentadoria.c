#include <stdio.h>
#include <stdlib.h>

void main(){
	int matricula, anoNascimento, anoIngresso;
	int idade, anosTrabalhados;
	int aposentar = 0;
	char textoCondicao[30] = "";
	//É necessário informar a matricula o ano de nascimento e
	//o ano de entrada na empresa
	printf("Informe a sua matricula:\n");
	scanf("%d", &matricula);
	printf("Informe o ano de nascimento:\n");
	scanf("%d", &anoNascimento);
	printf("Informe ano de entrada na empresa:\n");
	scanf("%d", &anoIngresso);
	//calcula a idade e anos trabalhados
	idade = 2021 - anoNascimento;
	anosTrabalhados = 2021 - anoIngresso;
	//Verifica se é possível a aposentadoria
	if(idade >= 65){
		aposentar = 1;
	}
	if(anosTrabalhados >= 30){
		aposentar = 1;
	}
	if(idade >=60 && anosTrabalhados >= 25){
		aposentar = 1;
	}
	system("cls");
	if(aposentar == 1){
		printf("\nPode se aposentar!");
	}else{
		printf("\nNão pode se aposentar...");
	}
	
}
