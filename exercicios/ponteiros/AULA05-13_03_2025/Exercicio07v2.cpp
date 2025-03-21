/*
7. Faça uma função que leia um nome, converta o primeiro caractere deste 
nome para maiúscula. O nome deve ser passado para função por referência.
*/
#include <stdio.h>
#include <stdlib.h>

void converta(char *nome);

int main(void){
	char nome[50];
	
	printf("Digite um nome: ");
	gets(nome);
	
	converta(nome);
	
	printf("Nome e %s\n",nome);
		
	return 0;
}

void converta(char *nome){
	if(nome[0]>='a' && nome[0]<='z'){
		nome[0]-='a'-'A';
	}
	for(int i=1;nome[i]!='\0';i++){
		if(nome[i]>='A' && nome[i]<='Z'){
			nome[i]+=32;
		}
	}
}

