#include <stdio.h>
#include <stdlib.h>

void soma(int *a, int *b);

int main(void){
	int n1, n2;
	
	printf("Digite n1: ");
	scanf("%i",&n1);
	printf("Digite n2: ");
	scanf("%i",&n2);
	
	soma(&n1,&n2);
	
	printf("Soma e %i",n1);
	
	return 0;
	
}
void soma(int *a, int *b){
	*a+=*b;
}