/*
W.A.C.P to find out factorial of a number using recursion.
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
long long factorial(int a){
    int b=1;
    if(a==0) return b;
    else{
        b=a*factorial(a-1);
        return b;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    long long m=factorial(n);
    printf("Factorial=%lld", m);
}