/*
2.	Faça uma função que desenhe linhas de caracteres na tela, a função receberá 
como argumento o tipo de caractere e o número de linhas que deverá imprimir.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

// Quais são os prototipos das funções?
void desenhe(char c, int l);


int main(void){
	// Quais são as variáveis do sistema?
	char caracter;
	int linha;
	
	// Quais são as entrada de dados?
	printf("Digite um caracter: ");
	scanf("%c",&caracter);
	fflush(stdin);
	printf("Digite a quantidade de linhas: ");
	scanf("%i",&linha);
	fflush(stdin);
	
	// Processamento e saída
	desenhe(caracter, linha);
	
	return 0;	
}

// Função desenhe
void desenhe(char c, int l){
	for(int i=1;i<=l;i++){
		for(int j=1;j<=78;j++){
			printf("%c",c);
		}
		printf("\n");
	}
}
	