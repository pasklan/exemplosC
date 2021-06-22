#include <stdio.h>



int main(){
	int matriz[2][2];
	
	matriz[0][0] = 1;
	matriz[0][1] = 3;
	matriz[1][0] = 4;
	matriz[1][1] = 7;
//	printf("valor %d", matriz[0][1]);
	
	int i,k;
	/*
	for(c=0; c<5; c++){
		printf("Informe os valores do vetor: \n");
		scanf("%d", &vetor[c]);
	}
	*/
	for(i=0; i<2; i++){
		for(k=0; k<2; k++){
			printf("%d", matriz[i][k]);	
		}
		printf("%d\n", matriz[i][k]);
	}

	
	return 0;

}
