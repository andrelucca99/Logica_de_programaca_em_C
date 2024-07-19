// Cédulas

// Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

// Entrada
// O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

// Saída
// Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.

// Exemplo de Entrada  |	Exemplo de Saída

//     576                   576
//                           5 nota(s) de R$ 100,00
//                           1 nota(s) de R$ 50,00
//                           1 nota(s) de R$ 20,00
//                           0 nota(s) de R$ 10,00
//                           1 nota(s) de R$ 5,00
//                           0 nota(s) de R$ 2,00
//                           1 nota(s) de R$ 1,00

//     11257                 11257
//                           112 nota(s) de R$ 100,00
//                           1 nota(s) de R$ 50,00
//                           0 nota(s) de R$ 20,00
//                           0 nota(s) de R$ 10,00
//                           1 nota(s) de R$ 5,00
//                           1 nota(s) de R$ 2,00
//                           0 nota(s) de R$ 1,00

//     503                   503
//                           5 nota(s) de R$ 100,00
//                           0 nota(s) de R$ 50,00
//                           0 nota(s) de R$ 20,00
//                           0 nota(s) de R$ 10,00
//                           0 nota(s) de R$ 5,00
//                           1 nota(s) de R$ 2,00
//                           1 nota(s) de R$ 1,00

#include <stdio.h>

int calculanota(int valor, int numero)
{
  return valor / numero;
}

int calcularesto(int valor, int numero)
{
  return valor % numero;
}

int main()
{
  int valor, n100, n50, n20, n10, n5, n2, n1;

  scanf("%d", &valor);
  printf("%d\n", valor);

  n100 = calculanota(valor, 100);
  valor = calcularesto(valor, 100);

  n50 = calculanota(valor, 50);
  valor = calcularesto(valor, 50);

  n20 = calculanota(valor, 20);
  valor = calcularesto(valor, 20);

  n10 = calculanota(valor, 10);
  valor = calcularesto(valor, 10);

  n5 = calculanota(valor, 5);
  valor = calcularesto(valor, 5);

  n2 = calculanota(valor, 2);
  valor = calcularesto(valor, 2);

  n1 = valor;

  printf("%d nota(s) de R$ 100,00\n", n100);
  printf("%d nota(s) de R$ 50,00\n", n50);
  printf("%d nota(s) de R$ 20,00\n", n20);
  printf("%d nota(s) de R$ 10,00\n", n10);
  printf("%d nota(s) de R$ 5,00\n", n5);
  printf("%d nota(s) de R$ 2,00\n", n2);
  printf("%d nota(s) de R$ 1,00\n", n1);
  return 0;
}
