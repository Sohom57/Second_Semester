/*
W.A.C.P to find GCD of two numbers using recursion.
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int g=gcd(n, m);
    printf("GCD=%d", g);
}
