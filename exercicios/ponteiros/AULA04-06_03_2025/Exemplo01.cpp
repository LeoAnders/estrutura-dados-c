#include <stdio.h>
#include <stdlib.h>

int main(void){
	int numero;
	numero = 5;
	int *numero2;
	numero2=&numero;
	
	
	printf("numero %i \n",numero);
	printf("numero %p \n",&numero);
	
	printf("numero2 %i \n",*numero2);
	printf("numero2 %p \n",numero2);
	
	*numero2=7;
	
	printf("numero %i \n",numero);
	printf("numero %p \n",&numero);
	
	printf("numero2 %i \n",*numero2);
	printf("numero2 %p \n",numero2);
	
	return 0;
	
}