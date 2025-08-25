#include <stdio.h>

void main() {
  int a[100][100], b[100][100];
  int x, y;
  scanf("%d%d", &x, &y);
  for (int i=0; i<x; i++) {
    for (int j=0; j<y; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i=0; i<x; i++) {
    for (int j=0; j<y; j++) {
      b[j][i] = a[i][j];
    }
  }
  for (int i=0; i<x; i++) {
    for (int j=0; j<y; j++) {
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }
}


