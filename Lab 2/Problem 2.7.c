#include<stdio.h>
int main(){
    long long int a, o=0;
    scanf("%lld", &a);

    while(a>0)
    {
        o=a%10;
        printf("%lld", o);

        a=a/10;

    }

}
