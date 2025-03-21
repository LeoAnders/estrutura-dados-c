/*
2. Construa um programa para calcular a área e de um círculo, 
a área deve ser do tipo de ponteiro.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float area(float *r);

int main(void){
	float raio;
	
	printf("Digite o raio: ");
	scanf("%f",&raio);
	
	printf("A area e %f\n",area(&raio));

	return 0;
}

float area(float *r){
	return M_PI*pow(*r,2);
}