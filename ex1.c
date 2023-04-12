#include <stdio.h>

int main(void) {
  system("clear"); // apaga oque vem antes
  int numerofuncionario;
  float horastrabalhadas, valorhora, salario;
    
  printf("Digite o número do funcionário.............................:");
  scanf("%d", &numerofuncionario);
  
  printf("Digite a quantidade de horas trabalhadas...................:");
  scanf("%f", &horastrabalhadas);
  
  printf("Digite o valor que o funcionário recebe por hora trabalhada:");
  scanf("%f", &valorhora);
    
  salario = horastrabalhadas * valorhora;

  system("clear");
    
  printf("Número do funcionário......: %d\n", numerofuncionario);
  printf("Salário do funcionário é...: R$ %8.2f\n", salario);
    
  return 0;
}