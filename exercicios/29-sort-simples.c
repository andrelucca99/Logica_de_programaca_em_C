// Sort Simples

// Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

// Entrada
// A entrada contem três números inteiros.

// Saída
// Imprima a saída conforme foi especificado.

// Exemplo de Entrada  |	Exemplo de Saída

//     7 21 -14              -14
//                           7
//                           21

//                           7
//                           21
//                           -14

//     -14 21 7              -14
//                           7
//                           21

//                           -14
//                           21
//                           7

#include <stdio.h>

int main()
{
  int n1, n2, n3, min, mid, max;

  scanf("%d %d %d", &n1, &n2, &n3);

  if (n1 <= n2 && n1 <= n3)
  {
    min = n1;
  }
  else if (n2 <= n1 && n2 <= n3)
  {
    min = n2;
  }
  else
  {
    min = n3;
  }

  if (n1 >= n2 && n1 >= n3)
  {
    max = n1;
  }
  else if (n2 >= n1 && n2 >= n3)
  {
    max = n2;
  }
  else
  {
    max = n3;
  }

  if ((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3))
  {
    mid = n1;
  }
  else if ((n2 > n1 && n2 < n3) || (n2 < n1 && n2 > n3))
  {
    mid = n2;
  }
  else
  {
    mid = n3;
  }

  printf("%d\n%d\n%d\n", min, mid, max);

  printf("\n");

  printf("%d\n%d\n%d\n", n1, n2, n3);

  return 0;
}
