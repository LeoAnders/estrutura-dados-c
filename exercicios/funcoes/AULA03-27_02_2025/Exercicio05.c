/*
5.	Faça um programa que leia uma data, passe para uma função que reajuste esta 
data em cinco dias.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

// Quais são os prototipos das funções?

void data(int d, int m, int a);

int main(void){
	// Quais são as variáveis do sistema?
	int dia, mes, ano;
	
	// Quais são as entrada de dados?
	printf("Digite data (d/m/a): ");
	scanf("%i%*c%i%*c%i",&dia,&mes,&ano);
	
	// Saída
	data(dia,mes,ano);
	
	return 0;
}

// funções
void data(int d, int m, int a){
	d+=5;
	if((d>31) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10)){
		d-=31;
		m++;
	}else if((d>30) && (m==4 || m==6 || m==9 || m==11)){
		d-=30;
		m++;
	}else if((d>29) && (m==2) && ((a%400==0) || (a%4==0 && a%100!=0))){
		d-=29;
		m++;
	}else if((d>28) && (m==2)){
		d-=28;
		m++;
	}else if((d>31) && (m==12)){
		d-=31;
		m=1;
		a++;
	}
	printf("A nova data e %i/%i/%i\n",d,m,a);
}