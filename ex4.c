#include <stdio.h>
#include <math.h>

int main(void) {
  system("clear"); // apaga oque vem antes
  float angulo, distancia, Mescada;
    
  printf("Digite o ângulo formado pela escada e o chao (em graus): ");
  scanf("%f", &angulo);
    
  printf("Digite a distancia da escada ate a parede: ");
  scanf("%f", &distancia);
    
    // O cálculo da medida da escada é feito utilizando a fórmula da tangente
  Mescada = distancia / cos(angulo * M_PI / 180); // M_PI é o número de PI
    

  printf("A medida da escada para alcançar sua ponta é de: %f metros\n", Mescada);
    
  return 0;
}




