/*
6. Faça uma função que receba como parâmetros por referência a linha, 
a coluna e uma mensagem, esta função deve imprimir na tela a mensagem 
na posição solicitada. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void escreva(int *l, int *c, char *m);

int main(void){
	int linha, coluna;
	char mensagem[50];
	
	printf("Digite a linha: ");
	scanf("%i",&linha);
	printf("Digite a coluna: ");
	scanf("%i",&coluna);
	fflush(stdin);
	printf("Digite a mensagem: ");
	gets(mensagem);
	
	escreva(&linha,&coluna,mensagem);
	
	return 0;
}

void escreva(int *l, int *c, char *m){
	system("cls");
	for(int i=1;i<=*l;i++){
		printf("\n");
	}
	for(int i=1;i<=*c;i++){
		printf(" ");
	}
	printf("%s",m);
}