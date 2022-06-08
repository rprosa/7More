#include <stdio.h>

void avaliar(char conceito){
  switch(conceito) {
  case 'a':
    printf("Reprovado");
    break;
  case 'b':
    printf("Exame especial");
    break;
  case 'c':
    printf("Regular");
    break;
  case 'd':
    printf("Bom");
    break;
  case 'e':
    printf("Ótimo");
    break;
  default:
    printf("Não se encaixa na avaliação");
}
}

int main() {
  avaliar('c');
  return 0;
}
