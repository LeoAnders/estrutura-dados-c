/*
8. Faça uma função que leia um texto e converta este texto para maiúscula.
O texto deve ser passado para função por referência.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void converta(char *mensagem);

int main(void)
{
  char texto[50];

  printf("Digite um texto: ");
  fgets(texto, sizeof(texto), stdin);

  converta(texto);

  printf("Texto e %s\n", texto);
}
void converta(char *mensagem)
{
  while (*mensagem)
  {
    *mensagem = toupper(*mensagem);
    mensagem++;
  }
}