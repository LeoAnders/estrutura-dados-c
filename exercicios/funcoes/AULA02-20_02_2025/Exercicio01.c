/*
1.	Construa um programa que define uma estrutura de 
tipo pessoa, que solicite inserção de dados para a 
estrutura de tipo pessoa e que imprime a estrutura 
tipo pessoa.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[50];
	int idade;
	float altura;
}Pessoa;

int main (void){
	Pessoa a;
	
	printf("Digite o nome: ");
	gets(a.nome);
	fflush(stdin);
	printf("Digite a idade: ");
	scanf("%i",&a.idade);
	fflush(stdin);
	printf("Digite a altura: ");
	scanf("%f",&a.altura);
	fflush(stdin);
	
	printf("Nome : %s\n",a.nome);
	printf("Idade : %i\n",a.idade);
	printf("Altura: %f\n",a.altura);
	
	return 0;
}