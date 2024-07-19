// Notas e Moedas

// Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

// Entrada
// O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

// Saída
// Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

// Obs: Utilize ponto (.) para separar a parte decimal.

// Exemplo de Entrada  |	Exemplo de Saída

//       576.73            NOTAS:
//                         5 nota(s) de R$ 100.00
//                         1 nota(s) de R$ 50.00
//                         1 nota(s) de R$ 20.00
//                         0 nota(s) de R$ 10.00
//                         1 nota(s) de R$ 5.00
//                         0 nota(s) de R$ 2.00
//                         MOEDAS:
//                         1 moeda(s) de R$ 1.00
//                         1 moeda(s) de R$ 0.50
//                         0 moeda(s) de R$ 0.25
//                         2 moeda(s) de R$ 0.10
//                         0 moeda(s) de R$ 0.05
//                         3 moeda(s) de R$ 0.01

//       4.00              NOTAS:
//                         0 nota(s) de R$ 100.00
//                         0 nota(s) de R$ 50.00
//                         0 nota(s) de R$ 20.00
//                         0 nota(s) de R$ 10.00
//                         0 nota(s) de R$ 5.00
//                         2 nota(s) de R$ 2.00
//                         MOEDAS:
//                         0 moeda(s) de R$ 1.00
//                         0 moeda(s) de R$ 0.50
//                         0 moeda(s) de R$ 0.25
//                         0 moeda(s) de R$ 0.10
//                         0 moeda(s) de R$ 0.05
//                         0 moeda(s) de R$ 0.01

//       91.01             NOTAS:
//                         0 nota(s) de R$ 100.00
//                         1 nota(s) de R$ 50.00
//                         2 nota(s) de R$ 20.00
//                         0 nota(s) de R$ 10.00
//                         0 nota(s) de R$ 5.00
//                         0 nota(s) de R$ 2.00
//                         MOEDAS:
//                         1 moeda(s) de R$ 1.00
//                         0 moeda(s) de R$ 0.50
//                         0 moeda(s) de R$ 0.25
//                         0 moeda(s) de R$ 0.10
//                         0 moeda(s) de R$ 0.05
//                         1 moeda(s) de R$ 0.01

#include <stdio.h>
#include <math.h> // Para usar a função fmod

int calcularNotas(double *valor, double unidade)
{
  int quantidade = (int)(*valor / unidade);
  *valor = fmod(*valor, unidade);
  return quantidade;
}

int main()
{
  double valor;
  int n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01;

  scanf("%lf", &valor);

  // Calculas as notas

  n100 = calcularNotas(&valor, 100.0);
  n50 = calcularNotas(&valor, 50.0);
  n20 = calcularNotas(&valor, 20.0);
  n10 = calcularNotas(&valor, 10.0);
  n5 = calcularNotas(&valor, 5.0);
  n2 = calcularNotas(&valor, 2.0);

  // Converte o valor para centavos para facilitar o cálculo das moedas
  valor = valor * 100.0 + 0.5; // Adiciona 0.5 para corrigir possíveis erros de arredondamento

  // Calcula as moedas

  m1 = calcularNotas(&valor, 100.0);
  m50 = calcularNotas(&valor, 50.0);
  m25 = calcularNotas(&valor, 25.0);
  m10 = calcularNotas(&valor, 10.0);
  m05 = calcularNotas(&valor, 5.0);
  m01 = calcularNotas(&valor, 1.0);

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", n100);
  printf("%d nota(s) de R$ 50.00\n", n50);
  printf("%d nota(s) de R$ 20.00\n", n20);
  printf("%d nota(s) de R$ 10.00\n", n10);
  printf("%d nota(s) de R$ 5.00\n", n5);
  printf("%d nota(s) de R$ 2.00\n", n2);
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", m1);
  printf("%d moeda(s) de R$ 0.50\n", m50);
  printf("%d moeda(s) de R$ 0.25\n", m25);
  printf("%d moeda(s) de R$ 0.10\n", m10);
  printf("%d moeda(s) de R$ 0.05\n", m05);
  printf("%d moeda(s) de R$ 0.01\n", m01);
  return 0;
}

// Para compilar esse código use esse comando: gcc -o test.out test.c -lm
// depois rode o arquivo compilado com o comando: ./test.out