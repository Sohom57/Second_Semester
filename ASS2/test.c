#include <stdio.h>

void main() {
  int a[100][100], b[100][100];
  int rows, cols;
  scanf("%d%d", &rows, &cols);
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      b[j][i] = a[i][j];
    }
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }
}

