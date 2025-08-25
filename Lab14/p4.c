/*
W.A.C.P that writes string in the file
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
    const char *arr="Please give us pass marks ;)";
    p=fopen("test4.txt", "w");
    fprintf(p, "%s", arr);
    printf("\nCompleted");
}