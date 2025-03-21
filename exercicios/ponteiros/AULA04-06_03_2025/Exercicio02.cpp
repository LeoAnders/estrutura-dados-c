/*
2. Construa um programa que define um tipo novo de dados, para uma 
estrutura de um animal, deverá conter atributos como: raça, cor, 
peso e sexo.  E solicite ao usuário do programa 10 espécies e depois 
imprima em tela. 
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char raca[30], cor[30], sexo;
	float peso;
}Animal;

Animal inserir(void);
void listar(Animal a[], int indice);

int main(void){
	int opcao, indice=0;
	Animal bd[10];
	
	do{
		system("cls");
		printf("1 - Inserir\n");
		printf("2 - Listar\n");
		printf("3 - Sair\n");
		printf("\nDigite uma opcao: ");
		scanf("%i",&opcao);
		fflush(stdin);
		switch(opcao){
			case 1:
				if(indice<10){
					bd[indice]=inserir();
					indice++;
				}else{
					printf("A base esta cheia\n");
				}
				break;
			case 2:
				listar(bd,indice);
				break;
			case 3:
				break;
			default: 
				printf("Erro! Nao tem opcao\n");
		}
		system("pause");
	}while(opcao!=3);
	
	return 0;
}

Animal inserir(void){
	Animal a;
	
	system("cls");
	printf("Digite a raca: ");
	gets(a.raca);
	fflush(stdin);
	printf("Digite a cor: ");
	gets(a.cor);
	fflush(stdin);
	printf("Digite o peso: ");
	scanf("%f",&a.peso);
	fflush(stdin);
	printf("Digite o sexo (m/f): ");
	scanf("%c",&a.sexo);
	fflush(stdin);
	
	return a;
}

void listar(Animal a[], int indice){
	system("cls");
	printf("RACA\tCOR\tPESO\tSEXO\n\n");
	for(int i=0;i<indice;i++){
		printf("%s\t%s\t%.1f\t%c\n",a[i].raca,a[i].cor,a[i].peso,a[i].sexo);
	}
}