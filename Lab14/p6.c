/*
W.A.C.P which concatenate two file and write it in third file
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    FILE *p, *q, *r;
    char arr;
    p=fopen("text6_1.txt", "r");
    q=fopen("text6_2.txt", "r");
    r=fopen("text6_3.txt", "w");
    while((arr=fgetc(p))!=EOF) fputc(arr, r);
    while((arr=fgetc(q))!=EOF) fputc(arr, r);
    printf("Complete");
}