/*
W.A.C.P which reads string from file
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
    p=fopen("test5.txt", "r");
    char arr[1001];
    fgets(arr, sizeof(arr), p);
    printf("String from file:\n%s", arr);
}