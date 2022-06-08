#include <stdio.h>

int main() {
  double notas[5];
  double conceito = 0;
  for(int i = 0; i < 5; i++){
    printf("informe sua nota: ");
    scanf("%lf", &notas[i]);
  }

  for(int i = 0; i < 5; i++){
    conceito += notas[i];
  };

  conceito = conceito/5;

  if (conceito >= 9.0){
    printf("conceito A");
  }
  else if (conceito >= 8.0 && conceito < 9.0){
    printf("conceito B");
  }
    
  else if (conceito >= 7.0 && conceito < 8.0) {
    printf("conceito C");
  }

  else if (conceito >= 6.0 && conceito < 7.0){
      printf("conceito D");
  }

  else if (conceito < 6.0){
      printf("conceito E");
  }

  printf("\nMédia final: %.2lf", conceito);


  
  
  return (0);
}

