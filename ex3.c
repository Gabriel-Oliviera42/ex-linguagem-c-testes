#include <stdio.h>
  int main(void) {
  system("clear"); // apaga oque vem antes
    
  int valor, notas5, notas2, moedas1;
    
  printf("Valor em reais: ");
  scanf("%d", &valor);
    
  notas5 = valor / 5; // calcula a quantidade de notas de 5 reais
  valor = valor % 5; // atualiza o valor restante após a retirada das notas de 5 reais
    
  notas2 = valor / 2; // calcula a quantidade de notas de 2 reais
  valor = valor % 2; // atualiza o valor restante após a retirada das notas de 2 reais
    
  moedas1 = valor; // o que sobrar são as moedas de 1 real
    
  printf("%d nota(s) de R$ 5,00\n", notas5);
  printf("%d nota(s) de R$ 2,00\n", notas2);
  printf("%d moeda(s) de R$ 1,00\n", moedas1);
    
  return 0;
}