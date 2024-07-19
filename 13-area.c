// Área

// Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
// a) a área do triângulo retângulo que tem A por base e C por altura.
// b) a área do círculo de raio C. (pi = 3.14159)
// c) a área do trapézio que tem A e B por bases e C por altura.
// d) a área do quadrado que tem lado B.
// e) a área do retângulo que tem lados A e B.
// Entrada
// O arquivo de entrada contém três valores com um dígito após o ponto decimal.

// Saída
// O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.

// Exemplos de Entrada  |	Exemplos de Saída

//     3.0 4.0 5.2         TRIANGULO: 7.800
//                         CIRCULO: 84.949
//                         TRAPEZIO: 18.200
//                         QUADRADO: 16.000
//                         RETANGULO: 12.000

//     12.7 10.4 15.2      TRIANGULO: 96.520
//                         CIRCULO: 725.833
//                         TRAPEZIO: 175.560
//                         QUADRADO: 108.160
//                         RETANGULO: 132.080

#include <stdio.h>

int main()
{
  double a, b, c, pi = 3.14159;

  scanf("%lf %lf %lf", &a, &b, &c);

  double triangulo = 0.5 * a * c;
  double circulo = pi * c * c;
  double trapezio = 0.5 * (a + b) * c;
  double quadrado = b * b;
  double retangulo = a * b;

  printf("TRIANGULO: %.3lf\n", triangulo);
  printf("CIRCULO: %.3lf\n", circulo);
  printf("TRAPEZIO: %.3lf\n", trapezio);
  printf("QUADRADO: %.3lf\n", quadrado);
  printf("RETANGULO: %.3lf\n", retangulo);

  return 0;
}
