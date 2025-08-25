#include<stdio.h>
int main(){
    long long  a, b=0, c=0, d, e;

    scanf("%lld", &a);

    while(a>0)
    {
        b=a%10;
        c++;
        a=a/10;

    }
    printf("%lld", c);
}
