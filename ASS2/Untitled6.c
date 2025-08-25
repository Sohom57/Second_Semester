#include <stdio.h>
int main() {
  int a[100][100];
  int x, y, i, j, s=0, k;
  scanf("%d%d", &x, &y);
  for(i=0; i<x; i++){
    for(j=0; j<y; j++){
      scanf("%d", &a[i][j]);
    }
  }
  for(i=0; i<x; i++){
    for(j=0; j<y; j++){
      printf("%d", a[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<x; i++) {
    for(j=0; j<y; j++) {
        if(i-1>=j){
            printf("0\t");
        }
        else{
            printf("%d\t", a[i][j]);
        }
    }
    printf("\n");
  }
}

