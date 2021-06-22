#include <stdio.h>
//A biblioteca 'locale.h'permite exibir acentos de
//maneira correta na saída padrão
#include <locale.h>

void limparTela(){
	system("cls");
}

int main(){
	/*
		A função setlocale() modifica a saída padrão
		para exibir corretamente a acentuação no 
		idioma Portugues
	*/
	setlocale(LC_ALL, "Portuguese");
	int matriz[2][2], c, k, f;
	
	matriz[0][0]= 2;
	matriz[0][1]= 1;
	matriz[1][0]= 3;
	matriz[1][1]= 4;
	
	puts("Digite algo: ");
	scanf("%d", &f);
	limparTela();
	for(c=0; c<2; c++){
		printf("\n");
		for(k=0; k<2; k++){
			printf("%d", matriz[c][k]);
		}
	}

}
