/*
W.A.C.P to check a number is prime or not using recursion.
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
int prime(int n, int i){
    if(n==1) return 0;
    if(i==1) return 1;
    else if(n%i==0) return 0; 
    else return prime(n, i-1);
}
int main(){
    int n, m, i;
    scanf("%d", &n);
    i=n/2;
    m=prime(n, i);
    if(m==1) printf("Prime number");
    else printf("Not Prime");
}


