/*
W.A.C.P to copy a data of file to other file
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    FILE *p, *q;
    char arr;
    p=fopen("test1.txt", "r");
    q=fopen("test2.txt", "w");
    while((arr=fgetc(p))!=EOF){
        fputc(arr, q);
    }
    printf("Completed\n");
}
