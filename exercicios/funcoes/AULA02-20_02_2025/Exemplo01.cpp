#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x,y;
}Ponto;

int main(void){
	// variáveis
	Ponto p[3];
	
	// entrada
	for(int i=0;i<3;i++){
		printf("Digite o x: ");
		scanf("%i",&p[i].x);
		printf("Digite o y: ");
		scanf("%i",&p[i].y);
	}
	
	// saída
	for(int i=0;i<3;i++){
		printf("%i = %i , %i\n",i,p[i].x,p[i].y);
	}
	
	return 0;
}