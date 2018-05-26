#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  double valorDepositado = 0;
  double valorCalculado = 0;
  float taxaJuros = 0;
  int qtAnos = 0;
  int ano;
  printf("Valor depositado:");
  scanf("%lf", &valorDepositado);
  
  printf("Taxa de juros:");
  scanf("%f", &taxaJuros);
  
  printf("Anos: ");
  scanf("%d", &qtAnos);

  printf("Ano\tSaldo\n");
  for (ano = 1; ano<=qtAnos; ano++)
  {
         valorCalculado = valorDepositado *  pow(1 + taxaJuros, ano);
         printf("%d\t%2.2f\n", ano, valorCalculado);
  }
  getch();
}
