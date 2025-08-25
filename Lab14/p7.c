/*
W.A.C.P to read Name and marks of students and store it in file
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    FILE *p;
    char arr[100];
    int n, m, i;
    p=fopen("text7.txt", "w");
    scanf("%d", &m);
    for(i=0; i<m; i++){
        scanf("%s%d", arr, &n);
        fprintf(p, "Name: %s, Marks= %d\n", arr, n);
    }
    printf("Complete\n");
}
