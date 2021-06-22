#include <stdio.h>
#include <math.h>
#include <stdbool.h>

main(){
	int i=0;
	for(i=0; i<200;i++){
		if(i%4 == 0)
			printf("%d\n",i);
	}
	return true;
}
