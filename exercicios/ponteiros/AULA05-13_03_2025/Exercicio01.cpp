/*
1. Construa um programa para calcular uma equação de 
segundo grau, onde x' e x'' deverão ser um ponteiro, 
imprima o valor de x' e x'' após a execução do programa.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void equacao(float a, float b, float c, float *x1, float *x2);

int main(void){
	float a, b, c, x1, x2;
	
	printf("Digite a: ");
	scanf("%f",&a);
	printf("Digite b: ");
	scanf("%f",&b);
	printf("Digite c: ");
	scanf("%f",&c);
	
	equacao(a,b,c,&x1,&x2);
	
	printf("X1 = %f\n",x1);
	printf("X2 = %f\n",x2);
	
	return 0;
}

void equacao(float a, float b, float c, float *x1, float *x2){
	float d;
	d=pow(b,2)-4*a*c;
	*x1=(-b+sqrt(d))/2*a;
	*x2=(-b-sqrt(d))/2*a;
}