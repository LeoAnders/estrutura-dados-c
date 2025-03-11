/*
Faça uma função que receba como argumento os valores dos lados de um triângulo, a função deverá retornar 0 se triângulo for equilátero, 1 se for isósceles ou 2 se for escaleno.
R.:
*/

#include <stdio.h>

int tipoTriangulo(float a, float b, float c)
{
  if (a == b && b == c)
  {
    return 0; // Equilátero
  }
  else if (a == b || b == c || a == c)
  {
    return 1; // Isósceles
  }
  else
  {
    return 2; // Escaleno
  }
}

int main()
{
  char lado1, lado2, lado3;
  char resultado2;

  printf("Digite os três lados do triângulo: ");
  scanf("%f %f %f", &lado1, &lado2, &lado3);

  int resultado = tipoTriangulo(lado1, lado2, lado3);

  return 0;
}
