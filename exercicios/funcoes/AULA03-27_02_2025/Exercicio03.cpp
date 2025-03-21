/*
3.	Fazer um programa que possibilite várias opções de cálculos a partir de um menu. 
O programa chamará a função correspondente a cada cálculo.
[ a ]  S = 1/1 + 3/2 + 5/3+........+ 99/50
[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10
[ c ] S = 1000/1 - 997/2 + 994/3.........
[ d ] S = 480/10 - 475/11 + 470/12 - .......
[ f  ] FIM
Obs.: Nas opções [c] e [d] fazer os cálculos para os 20 primeiros termos.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

// Quais são os prototipos das funções?
void funcaoA(void);
void funcaoB(void);
void funcaoC(void);
void funcaoD(void);

int main(void){
	// Quais são as variáveis do sistema?
	char opcao;

	// Quais são as entrada de dados?
	do{
		system("cls");
		printf("[ a ] S = 1/1 + 3/2 + 5/3 + ........ + 99/50\n"); 
		printf("[ b ] S = 1/1 - 2/2 + 3/3 - ........ - 10/10\n"); 
		printf("[ c ] S = 1000/1 - 997/2 + 994/3............\n"); 
		printf("[ d ] S = 480/10 - 475/11 + 470/12 - .......\n"); 
		printf("[ f ] FIM\n"); 
		printf("Digite uma opcao: ");
		scanf("%c",&opcao);
		fflush(stdin);
		switch(opcao){
			case 'a':
				funcaoA();
				break;
			case 'b':
				funcaoB();
				break;
			case 'c':
				funcaoC();
				break;
			case 'd':
				funcaoD();
				break;
			case 'f':
				break;
			default:
				printf("Erro. Opcao invalida!\n.");
		}
	}while(opcao!='f');

	return 0;	
}

// funções
void funcaoA(void){
	printf("[ a ] S = 1/1 + 3/2 + 5/3 + ........ + 99/50\n"); 
	float s = 0;

	for(int i=1, j=1; i<=50; i++,j+=2){
		s+=(float)i/j;
	}
	printf("S = %f\n",s);
	system("pause");
}

void funcaoB(void){
	printf("[ b ] S = 1/1 - 2/2 + 3/3 - ........ - 10/10\n"); 
	float s = 0;

	for(int i=1, j=1; i<=10; i++,j++){
		if(i%2==1){
			s+=(float)i/j;	
		}else{
			s-=(float)i/j;
		}
	}
	printf("S = %f\n",s);
	system("pause");
}

void funcaoC(void){
	printf("[ c ] S = 1000/1 - 997/2 + 994/3............\n");
	
	float s = 0;

	for(int i=1000, j=1, z=1; z<=20; i-=3,j++,z++){
		if(j%2==1){
			s+=(float)i/j;	
		}else{
			s-=(float)i/j;
		}
	}
	printf("S = %f\n",s);
	system("pause");
}

void funcaoD(void){
	printf("[ d ] S = 480/10 - 475/11 + 470/12 - .......\n"); 
		
	float s = 0;

	for(int i=480, j=10, z=1; z<=20; i-=5,j++,z++){
		if(j%2==0){
			s+=(float)i/j;	
		}else{
			s-=(float)i/j;
		}
	}
	printf("S = %f\n",s);
	system("pause");
	
}	