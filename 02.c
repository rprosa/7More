#include <stdio.h>

int main() {
  float conceito;
  printf("informe sua nota: ");
  scanf("%f", &conceito);

  if (conceito >= 9) {
    printf("conceito A");
  } else if (conceito >= 8 && conceito < 9) {
    printf("conceito B");
  }

  else if (conceito >= 7 && conceito < 8) {
    printf("conceito C");
  }

  else if (conceito >= 6 && conceito < 7) {
    printf("conceito D");
  }

  else if (conceito < 6) {
    printf("conceito E");
  }

  return (0);
}
