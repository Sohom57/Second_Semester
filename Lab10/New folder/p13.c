#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int dsum(int a){
    int b, d;
    while(a>0){
        b=a%10;
        float c=sqrt(b);
        printf("Digit Root of %d = %f\n", b, c);
        a/=10;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    dsum(n);
}