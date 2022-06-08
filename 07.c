#include "math.h"
#include "stdio.h"

int main(void) {
	float v1[5] = {2.8, 3.2, 1.9, 4.2};
	float v2[5] = {2.9, 4.8, 2.5, 3.5};

	float soma = 0;

	for (int i = 0; i < sizeof(v1) / sizeof(v1[0]); i++) {
		soma = v1[i] - v2[i];
		soma = powf(soma, 2);
		printf("%.2f\n", sqrtf(soma));
	}

	return 0;
}
