#include <stdio.h>
#include <stdlib.h>

void soma(int *a);

int main(void){
	int numeros[11];
	
	for(int i=0;i<10;i++){
		printf("Digite %i numero: ",i+1)	;
		scanf("%i",&numeros[i]);
	}
	soma(numeros);
	
	printf("A soma e %i\n",numeros[10]);
	
	return 0;
}


void soma(int *a){
	a[10]=0;
	for(int i=0;i<10;i++){
		a[10]+=a[i];
	}
}