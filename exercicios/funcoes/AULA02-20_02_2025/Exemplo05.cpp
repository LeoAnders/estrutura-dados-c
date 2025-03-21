#include <stdio.h>
#include <stdlib.h>

// prototipo da função
// saida_dado nome_funcao(dados de entrada);
void limpatela(void);
int multiplicacao(int a, int b);
void escreva(int a);
int entrada(void);

int main(void){
	char opcao;
	
	do{
		limpatela();
		escreva(entrada());
		printf("Deseja outra tabuada (s/n): ");
		scanf("%c",&opcao);
	}while(opcao == 's');
	
	return 0;
}

void limpatela(void){
	system("cls");
	system("color 2f");
}

int multiplicacao(int a, int b){
	int r = a*b;
	return r;
}

void escreva(int a){
	for(int i=0;i<=10;i++){
		printf("%i x %i = %i\n",a,i,multiplicacao(i,a));
	}
}

int entrada(void){
	int numero;
	printf("Digite um numero: ");
	scanf("%i",&numero);
	fflush(stdin);
	return numero;
}