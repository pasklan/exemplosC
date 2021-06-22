#include <stdio.h>
#include <locale.h>
int matriz[3][3];

int recebeMatriz(){
	int c, k;
	for(c=0; c<3; c++){
		for(k=0; k<3; k++){
			printf("Informe o valor:");
			scanf("%d", &matriz[c][k]);
		}
	}
}

int imprimeMatriz(){
	int c, k;		
	for(c=0; c<3; c++){
		for(k=0; k<3; k++){
			printf("%d", matriz[c][k]);
		}
		printf("\n");
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	recebeMatriz();
	imprimeMatriz();
	recebeMatriz();
	imprimeMatriz();
	recebeMatriz();
	imprimeMatriz();
	
}
