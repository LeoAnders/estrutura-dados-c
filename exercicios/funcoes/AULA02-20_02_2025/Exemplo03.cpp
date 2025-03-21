#include <stdio.h>
#include <stdlib.h>

// prototipo da função
// saida_dado nome_funcao(dados de entrada);
void limpatela(void);

int main(void){
	int numero;
	char opcao;
	
	do{
		limpatela();
		printf("Digite um numero: ");
		scanf("%i",&numero);
		fflush(stdin);
		for(int i=0;i<=10;i++){
			printf("%i x %i = %i\n",numero,i,i*numero);
		}
		printf("Deseja outra tabuada (s/n): ");
		scanf("%c",&opcao);
	}while(opcao == 's');
	
	return 0;
}

void limpatela(void){
	system("cls");
	system("color 2f");
}
