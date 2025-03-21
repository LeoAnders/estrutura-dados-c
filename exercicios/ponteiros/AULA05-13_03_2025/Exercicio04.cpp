/*
4. Faça um programa que peça um número para calcular o fatorial. 
Deve tem uma função para calcular o fatorial (por referência).
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fatorial(int *n);

int main(void){
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i",&numero);
	
	printf("O fatorial de %i e %.lf\n",numero,fatorial(&numero));

	return 0;
}

double fatorial(int *n){
	double r=1;
	for(int i=*n;i>=1;i--){
		r*=i;
	}
	return r;
}
