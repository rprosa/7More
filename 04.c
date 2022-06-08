#include <stdio.h>
double pi = 3.141592;

double comprimento_circ(int raio) {

  double comprimento_circ_res = (2 * pi) * raio;

  return comprimento_circ_res;
}

int main() {

  int vet[4];
  for (int j = 0; j < 4; j++) {
    printf("Insira o valor: ");
    scanf("%d", &vet[j]);
  }

  int i;

  for (i = 0; i < sizeof(vet) / sizeof(vet[0]); i++) {
    double resposta = comprimento_circ(vet[i]);
    printf("Comprimento é: %lf \n", resposta);
  }

  return 0;
}
