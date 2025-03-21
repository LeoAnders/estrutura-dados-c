/*
3. Construa um programa que define uma estrutura de peça, que 
poderá ser usado para outros programas, deverá conter atributos 
como: código, nome, cor, peso, preço. Também uma função entrada 
de dados e uma função de saídas de dados.
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

typedef struct{
	int codigo;
	char nome[30], cor[30];
	float peso, preco;
}Peca;

Peca entrada(void);
void saida(Peca a[], int n);

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

Peca entrada(void){
	Peca a;
	
	system("cls");
	printf("Digite o codigo: ");
	scanf("%i",&a.codigo);
	fflush(stdin);
	printf("Digite o nome: ");
	gets(a.nome);
	fflush(stdin);
	printf("Digite a cor: ");
	gets(a.cor);
	fflush(stdin);
	printf("Digite o peso: ");
	scanf("%f",&a.peso);
	fflush(stdin);
	printf("Digite o preco: ");
	scanf("%f",&a.preco);
	fflush(stdin);
	
	return a;
}

void saida(Peca a[], int n){
	system("cls");
	printf("CODIGO\tNOME\tCOR\tPESO\tPRECO\n\n");
	for(int i=0;i<n;i++){
		printf("%i\t%s\t%s\t%.1f\tR$ %.2f\n",a[i].codigo, a[i].nome, a[i].cor, a[i].peso, a[i].preco);
	}
}