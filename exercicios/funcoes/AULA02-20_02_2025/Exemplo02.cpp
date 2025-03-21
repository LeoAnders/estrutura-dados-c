#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x,y;
}Ponto;

Ponto entrada(void);
void saida(Ponto a, int i);

int main(void){
	// variáveis
	Ponto p[3];
	
	// entrada
	for(int i=0;i<3;i++){
		p[i]=entrada();
	}
	
	// saída
	for(int i=0;i<3;i++){
		saida(p[i],i);
	}
	
	return 0;
}
Ponto entrada(void){
	Ponto a;
	printf("Digite o x: ");
	scanf("%i",&a.x);
	printf("Digite o y: ");
	scanf("%i",&a.y);
	return a;
}

void saida(Ponto a, int i){
	printf("%i = %i , %i\n",i,a.x,a.y);
}
