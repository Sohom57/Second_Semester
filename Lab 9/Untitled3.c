#include<stdio.h>
#include<string.h>
int main(){
    int a, b, c, d, e, f;
    scanf("%d%d", &a, &b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d\nb=%d", a, b);
}
