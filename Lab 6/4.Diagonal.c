//Diagonal
#include <stdio.h>
int main() {
  int a[100][100], x, y, i, j, s=0;
  scanf("%d%d", &x, &y);
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) {
      scanf("%d", &a[i][j]);
      if(i==j) s+=a[i][j];
    }
  }
  for (i=0; i<x; i++) {
    for (j=0; j<y; j++) printf("%d\t", a[i][j]);
    printf("\n");
  }
  printf("%d", s);
}
