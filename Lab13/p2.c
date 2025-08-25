/*
W.A.C.P to count digits of a given number using recursion.
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
int dcount(int a){
    static int i=0, b=0;
    if(a>0){
        i++;
        dcount(a/10);
        return i;
    }
    else return i;
}
int main(){
    int n;
    scanf("%d", &n);
    int m=dcount(n);
    printf("Total Digits=%d", m);
}
