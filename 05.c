#include <stdio.h>

double f_de_x(double x) {
  double resultado_x = 1 / x;

  return resultado_x;
}

int main(void) {
  double valor_x[20][2];
  int continua;
  int tamanho;

  for (int i = 0; i < 20; i++) {
    printf("Informe o valor de X: ");
    scanf("%lf", &valor_x[i][0]);
    tamanho++;
    if (valor_x[i][0] == 0) {
      printf("Valor inválido");
      break;
    }
    valor_x[i][1] = f_de_x(valor_x[i][0]);
    printf("Você deseja informar mais algum valor? (1) Sim (2) Não: ");
    scanf("%d", &continua);
    if (continua != 1) {
      printf("    x     f(x)\n");
      for (int i = 0; i <= tamanho; i++) {
        for (int j = 0; j < 2; j++) {
          printf(" [%.2lf] ", valor_x[i][j]);
        }
        printf("\n");
      }
      break;
    }
  }
}
