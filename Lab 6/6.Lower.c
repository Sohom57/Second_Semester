#include <stdio.h>
int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    int a[x][y];
    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++) scanf("%d", &a[i][j]);
    }
    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++) {
            if(j<=i) printf("%d\t", a[i][j]);
            else printf("0\t");
        }
        printf("\n");
    }
}