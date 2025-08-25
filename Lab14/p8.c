/*
W.A.C.P to read ID and marks of a student and store it in file. 
If p already exists, add information to it.
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
int main (){
    FILE *p;
    p=fopen("test8.txt","a");
    int n, m, i, j;
    scanf("%d%d", &n, &m);
    int arr[n][m+1];
    for(i=0; i<n; i++){
        for(j=0; j<m+1; j++) scanf("%d", &arr[i][j]);
    }
    for(i=0; i<n; i++){
        int a=0;
        for(j=1; j<m; j++) a+=arr[i][j];
        fprintf(p,"%d\t\t%f\n",arr[i][0],(float)(a/(m-1)));
    }
    printf("\nCompleted");
}

// #include<stdio.h>
// int main(){
//     FILE *p;
//     int a;
//     scanf("%d", &a);
//     char id[a];
//     int n, tm=0, sm;
//     p=fopen("text8_1.txt", "w");
//     scanf("%s%d", id, &n);
//     for(int i=1; i<=n; i++){
//         scanf("%d", &sm);
//         tm+=sm;
//         fprintf(p, "Subject %d: %d\n", i, sm);
//     }
//     double am=(double)tm/n;
//     fprintf(p, "Total: %d\n", tm);
//     fprintf(p, "Average: %.2lf\n", am);
//     printf("Complete\n");
// }
