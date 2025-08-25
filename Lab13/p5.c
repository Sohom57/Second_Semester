/*
W.A.C.P to print Fibonacci series using recursion.
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
void fibonacci(int n, int a, int b){
    static int i=0;
    if(i==n) return;
    if(i<2){
        printf("%d ", i); i++;
        fibonacci(n, a, b);
    }
    else{
        int c=a+b;
        printf("%d ", c); i++;
        fibonacci(n, b, c);
    }
}
int main(){
    int n; scanf("%d", &n);
    fibonacci(n, 0, 1);
}
