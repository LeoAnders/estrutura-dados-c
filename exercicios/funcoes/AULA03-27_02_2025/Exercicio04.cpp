/*
4.	Faça uma função que receba como argumento os valores dos lados de um triângulo, 
a função deverá retornar 0 se triângulo for equilátero, 1 se for isósceles ou 2 se
for escaleno.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

// Quais são os prototipos das funções?
int triangulo(float a, float b, float c);

int main(void){
	// Quais são as variáveis do sistema?
	float ladoA, ladoB, ladoC;
	
	// Quais são as entrada de dados?
	printf("Digite lado A: ");
	scanf("%f",&ladoA);
	printf("Digite lado B: ");
	scanf("%f",&ladoB);
	printf("Digite lado C: ");
	scanf("%f",&ladoC);
	
	// Saída
	switch(triangulo(ladoA,ladoB,ladoC)){
		case 0:
			printf("Triangulo for equilatero\n");
			break;
		case 1: 
			printf("Triangulo for isosceles\n");
			break;	
		case 2: 
			printf("Triangulo for escaleno\n");
			break;
		default:
			printf("Nao e um triangulo\n");
	}
	
	return 0;
}

// funções
int triangulo(float a, float b, float c){
	if((a+b)>c && (a+c)>b && (b+c)>a){
		if(a==b && b==c){
			return 0;
		}else if(a==b || a==c || b==c){
			return 1;
		}else{
			return 2;
		}
	}else{
		return -1;
	}
}
