#include <stdio.h>

int main() {
    int a[100][100];
    int x, y, i, j;
    scanf("%d%d", &x, &y);
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++)
            scanf("%d", &a[i][j]);
    }
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("\n\n");
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++) {
            if(j>=i)
                printf("%d\t", a[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }
}
