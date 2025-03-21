/*
1.	Faça um programa que leia um número, passe este número como parâmetro para uma 
função que retorne 0 se o número for par ou 1 se o número for ímpar.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

// Quais são os prototipos das funções?
int valida(int n);

int main(void){
	// Quais são as variáveis do sistema?
	int numero;
	
	// Quais são as entradas de dados?
	printf("Digite um numero: ");
	scanf("%i",&numero);
	
	// Quais são os processamento de dados?
	// Quais são as saída de dados?
	if(valida(numero)){
		printf("O numero e impar\n");
	}else{
		printf("O numero e par\n");
	}
	
	return 0;
}

// função valida
int valida(int n){
	return n%2;
}