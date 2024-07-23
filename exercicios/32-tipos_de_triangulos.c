// Tipos de Triângulos

// Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

// se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
// se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
// se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
// se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
// se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
// se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
// Entrada
// A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

// Saída
// Imprima todas as classificações do triângulo especificado na entrada.

// Exemplos de Entrada  | 	Exemplos de Saída

// 7.0 5.0 7.0            TRIANGULO ACUTANGULO
//                        TRIANGULO ISOSCELES

// 6.0 6.0 10.0           TRIANGULO OBTUSANGULO
//                        TRIANGULO ISOSCELES

// 6.0 6.0 6.0            TRIANGULO ACUTANGULO
//                        TRIANGULO EQUILATERO

// 5.0 7.0 2.0            NAO FORMA TRIANGULO

// 6.0 8.0 10.0           TRIANGULO RETANGULO

#include <stdio.h>
#include <math.h>

void swap(double *x, double *y)
{
  double temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  double a, b, c;

  scanf("%lf %lf %lf", &a, &b, &c);

  if (a < b)
    swap(&a, &b);
  if (a < c)
    swap(&a, &c);
  if (b < c)
    swap(&b, &c);

  if (a >= (b + c))
  {
    printf("NAO FORMA TRIANGULO\n");
  }
  else
  {
    if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
    {
      printf("TRIANGULO RETANGULO\n");
    }
    if (pow(a, 2) > (pow(b, 2) + pow(c, 2)))
    {
      printf("TRIANGULO OBTUSANGULO\n");
    }
    if (pow(a, 2) < (pow(b, 2) + pow(c, 2)))
    {
      printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c)
    {
      printf("TRIANGULO EQUILATERO\n");
    }
    else if (a == b || a == c || b == c)
    {
      printf("TRIANGULO ISOSCELES\n");
    }
  }

  return 0;
}
