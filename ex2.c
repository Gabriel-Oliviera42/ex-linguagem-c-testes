#include <stdio.h>

int main(void) {
  
  system("clear"); // apaga oque vem antes
  
  float distancia, combustivel, consumo;
    
  printf("Distância percorrida em Km: ");
  scanf("%f", &distancia);
  
  printf("Total de combustível gasto em litros: ");
  scanf("%f", &combustivel);
    
  consumo = distancia / combustivel;

  system("clear");
    
  printf("Consumo médio de %.2f Km/l\n", consumo);
    
  return 0;
}