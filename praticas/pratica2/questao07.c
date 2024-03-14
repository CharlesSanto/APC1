/*
7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas
no mês e calcule o sálario líquido, e os impostos descontados. Considere IR igual a 25%
e INSS igual a 1%
*/

#include <stdio.h>

int main() {
  float valor_da_hora_de_trabalho = 150.00;
  float total_de_horas_trabalhadas = 100;
  
  const float IR = 0.25f; 
  const float INSS = 0.11f;

  float salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas;
  float imposto_renda = salario_bruto * IR;
  float imposto_previdencia = salario_bruto * INSS;
  float salario_liquido = salario_bruto - imposto_renda - imposto_previdencia;

  printf("\x1b[47m\x1b[31m-----------------------\x1b[0m\n");
  printf("\x1b[47m  CONTRACHEQUE  \x1b[0m\n");
  printf("\x1b[47m-----------------------\n\x1b\x1b[0m[0m");
  printf("\x1b[47m\x1b[32mSalario Bruto....: R$ %5.2f\x1b[0m\n", salario_bruto);
  printf("\x1b[47mImposto Previ....: R$ %5.2f\x1b[0m\n", imposto_renda);
  printf("\x1b[47mImposto Liquido..: R$ %5.2f\x1b[0m\\x1b[0m", salario_liquido);
  printf("\x1b[47m\x1b[31m-----------------------\x1b[0m\n");
  printf("\x1b[47m  CONTRACHEQUE  \x1b[0m\n");
  printf("\x1b[47m-----------------------\x1b\x1b[0m\n[0m");
  
  return 0;
}