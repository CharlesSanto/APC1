/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/
 #include <stdio.h>

int main() {
  float preco_inicial = 100.00f; // sempre colocar um F, para identificar que e float
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PAESP = 0.0165f;

  float valor_icms = ICMS * preco_inicial;
  float valor_cofins = COFINS * preco_inicial;
  float valor_pis_paesp = PIS_PAESP * preco_inicial;

  
  float preco_final = (1 + ICMS + COFINS + PIS_PAESP) * preco_inicial;
  printf("Preco inicial = R$%.2f\n", preco_inicial);
  printf("Valor ICMS = R$%.2f\n", valor_icms);
  printf("Valor COFINS = R$%.2f\n", valor_cofins);
  printf("Valor PIS/PAESP = R$%.2f\n", valor_pis_paesp);
  printf("Preco final = R$%.2f\n", preco_final);

  return 0;
}