#include <stdio.h>
int main() {
  int a[100][100], b[100][100], c[100][100];
  int x, y, i, j;
  scanf("%d%d", &x, &y);
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) scanf("%d", &a[i][j]);
  }
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) printf("%d\t", a[i][j]);
    printf("\n");
  }
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) scanf("%d", &b[i][j]);
  }
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) printf("%d\t", b[i][j]);
    printf("\n");
  }
  printf("\n\n");
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) {
        for(int k=0; k<y; k++){
            c[i][j]+=a[i][k]*b[k][j];
        }
        c[i][j] = a[i][j] + b[i][j];
        printf("%d\t", c[i][j]);
    }
    printf("\n");
  }

}
