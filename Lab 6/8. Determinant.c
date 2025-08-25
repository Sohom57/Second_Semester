//Determinent
#include <stdio.h>
int main() {
    int a[100][100], x, y, i, j, d;
    scanf("%d%d", &x, &y);
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++) scanf("%d", &a[i][j]);
    }
    for(i=0; i<x; i++) {
        for(j=0; j<y; j++) printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("\n\n");
    if(x==2&&y==2){
        d=a[0][0]*a[1][1]-a[1][0]*a[0][1];
        printf("%d", d);
    }
    if(x==3&&y==3){
        d= a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
        printf("%d", d);
    }
}
