#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
long long int factorial(int a){
    long long int b=1;
    for(int i=a; i>0; i--) b*=i;
    return b;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", factorial(n));
}