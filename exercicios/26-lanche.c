// Lanche

// Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

// Verificar a tabela no site: // https://judge.beecrowd.com/pt/problems/view/1038

// Entrada
// O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

// Saída
// O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.

// Exemplo de Entrada  |	Exemplo de Saída

//     3 2                 Total: R$ 10.00

//     4 3                 Total: R$ 6.00

//     2 3                 Total: R$ 13.50

#include <stdio.h>

int main()
{
  int codigo, qtdItem;
  double dog = 4.0, xSalada = 4.5, xBacon = 5.0, torrada = 2.0, refri = 1.50, saldo;

  scanf("%d %d", &codigo, &qtdItem);

  if (codigo == 1)
  {
    saldo = dog * qtdItem;
    printf("Total: R$ %.2lf\n", saldo);
  }
  if (codigo == 2)
  {
    saldo = xSalada * qtdItem;
    printf("Total: R$ tes %.2lf\n", saldo);
  }
  if (codigo == 3)
  {
    saldo = xBacon * qtdItem;
    printf("Total: R$ %.2lf\n", saldo);
  }
  if (codigo == 4)
  {
    saldo = torrada * qtdItem;
    printf("Total: R$ %.2lf\n", saldo);
  }
  if (codigo == 5)
  {
    saldo = refri * qtdItem;
    printf("Total: R$ %.2lf\n", saldo);
  }

  return 0;
}
