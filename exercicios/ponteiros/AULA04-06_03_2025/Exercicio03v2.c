/*
3. Construa um programa que define uma estrutura de peça, que 
poderá ser usado para outros programas, deverá conter atributos 
como: código, nome, cor, peso, preço. Também uma função entrada 
de dados e uma função de saídas de dados.
*/
#include <stdio.h>
#include <stdlib.h>
#include "Exercicio03v2.h"

#define TAM 10

int main(void){
	int op, indice=0;
	Peca bd[TAM];
	
	do{
		system("cls");
		printf("1 - Inserir\n");
		printf("2 - Listar\n");
		printf("3 - Sair\n");
		printf("\nDigite uma opcao: ");
		scanf("%i",&op);
		fflush(stdin);
		
		switch(op){
			case 1:
				if(indice<TAM){
					bd[indice]=entrada();
					indice++;
				}else{
					printf("Erro! Nao tem mais espaco.\n");
				}
				break;
			case 2:
				saida(bd,indice);
				break;
			case 3:
				break;
			default:
				printf("Erro! Nao tem esta opcao.\n");
		}
		system("pause");
		
	}while(op!=3);
	
	return 0;
}