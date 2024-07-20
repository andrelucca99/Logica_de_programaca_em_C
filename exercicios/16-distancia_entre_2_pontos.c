// Distância Entre Dois Pontos

// Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais, segundo a fórmula:

// Distancia = // verificar a formular no proprio site.  https://judge.beecrowd.com/pt/problems/view/1015

// Entrada
// O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

// Saída
// Calcule e imprima o valor da distância segundo a fórmula fornecida, considerando 4 casas decimais.

// Exemplo de Entrada | Exemplo de Saída

//     1.0 7.0             4.4721
//     5.0 9.0

//     -2.5 0.4            16.1484
//     12.1 7.3

//     2.5 -0.4            16.4575
//     -12.2 7.0

#include <stdio.h>
#include <math.h>

int main()
{
  double x1, y1, x2, y2, distancia;

  scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

  distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  printf("%.4lf\n", distancia);
  return 0;
}
