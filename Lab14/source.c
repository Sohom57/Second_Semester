#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    FILE *p;
    p=fopen("test8.txt", "a");
    int n, m, i, j;
    scanf("%d%d", &n, &m);
    int arr[n][m+1];
    for(i=0; i<n; i++){
        for(j=0; j<m+1; j++) scanf("%d", &arr[i][j]);
    }
    for(i=0; i<n; i++){
        int c=0;
        for(j=1; j<m; j++) c+=arr[i][j];
        fprintf(p, "%d\t\t%f\n", arr[i][0], (float)(c/(m-1)));
    }
    printf("Completed\n");
}