#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    FILE *p;
    int n, m, i, j, b, c;
    scanf("%d%d", &n, &m);
    int arr[n][m], brr[n];
    float crr[n];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++) scanf("%d", &arr[i][j]);
    }
    for(i=0; i<n; i++){
        brr[i]=0;
        for(j=0; j<m; j++){
            brr[i]+=arr[i][j];
        }
        crr[i]=brr[i]/m;
    }
    p=fopen("test.txt", "w");
    for(i=0; i<n; i++){
        fprintf(p, "%d\t%d\t%.2f\n", i+1, brr[i], crr[i]);
    }
    printf("\n\nCompleted\n");
}


