/*
3. Construa um programa que contém duas variáveis inteiras, e cada uma 
destas variáveis deverá ter um valor atribuído nelas, através de uma 
entrada de dado do usuário. Também elaborem no mesmo programa três 
funções, que deveram usar o conceito de ponteiro para manipular a 
passagem dos dados para as funções. As funções deverão ter as 
seguintes funcionalidades: a soma das duas variáveis, a diferença 
entre as duas variáveis e a multiplicação das duas variáveis.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int *n1, int *n2);
int diferenca(int *n1, int *n2);
int multiplicacao(int *n1, int *n2);

int main(void){
	int numero1, numero2;
	
	printf("Digite 1 numero: ");
	scanf("%i",&numero1);
	printf("Digite 2 numero: ");
	scanf("%i",&numero2);
	
	printf("Soma = %i\n",soma(&numero1,&numero2));
	printf("Diferenca = %i\n",diferenca(&numero1,&numero2));
	printf("Multiplicacao = %i\n",multiplicacao(&numero1,&numero2));
	
	return 0;
}

int soma(int *n1, int *n2){
	return *n1+*n2;
}
int diferenca(int *n1, int *n2){
	return *n1-*n2;
}
int multiplicacao(int *n1, int *n2){
	return *n1**n2;
}