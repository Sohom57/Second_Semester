#include<stdio.h>
int main(){
    long long int a, o=0, m=0;
    scanf("%lld", &a);

    while(a>0)
    {
        o=a%10;

        m+=o;
        a=a/10;

    }
    printf("%d", m);

}
