#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int dsum(int a){
    int b, c=0, d;
    while(a>0){
        b=a%10;
        c+=b;
        a/=10;
    }
    return c;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", dsum(n));
}