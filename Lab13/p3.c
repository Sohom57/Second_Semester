/*
W.A.C.P to find the sum of digits in c using recursion.
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
int jog(int a){
    int b=0, i=a%10;
    if(a==0) return b;
    else b=i+jog(a/10);
    return b;
}
int main(){
    int n;
    scanf("%d", &n);
    int m=jog(n);
    printf("Sum of Digits=%d", m);
}