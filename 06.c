// matriz transposta
// 1,4,7
// 2,5,8
// 3,6,9
#include <stdio.h>

int main() {
	int sizeL = 3, sizeC = 3;
	int mat[sizeL][sizeC];
	int trans[sizeC][sizeL];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			printf("\nElemento[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}

	printf("\nMatriz original:\n");
	for (int l = 0; l < sizeL; l++) {
		for (int c = 0; c < sizeC; c++) {
			printf("%3d ", mat[l][c]);
		}
		printf("\n");
	}

  // Transportando a matriz  
	for (int l = 0; l < sizeL; l++) {
		for (int c = 0; c < sizeC; c++) {
			trans[c][l] = mat[l][c];
		}
	}

	printf("\nMatriz transposta:\n");
	for (int l = 0; l < sizeC; l++) {
		for (int c = 0; c < sizeL; c++) {
			printf("%3d ", trans[l][c]);
		}
		printf("\n");
	}

	return 0;
}
