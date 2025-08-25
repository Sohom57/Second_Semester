#include<stdio.h>
#include<string.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("Greatest = %d", (a>b)?((a>c)? a:c):((b>c)?b:c));
}

