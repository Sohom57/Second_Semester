/*Implement the call by value and call by reference in case of function
with the concept of pointer.
*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int pointer(int a, int b){
    int *p, *q;
    p=&a;
    q=&b;
    return *p+*q;
}
int value(int a, int b){
    return a+b;
}
int main(){
    int n, m, b, c;
    scanf("%d%d", &n, &m);
    printf("Reference by pointer=%d\n", pointer(n, m));
    printf("Reference by value=%d\n", value(n, m));
}
