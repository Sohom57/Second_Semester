//ASCII value
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char n[100];
    int a, b, i;
    gets(n);
    a=strlen(n);
    for(i=0; i<a; i++){
        b=n[i];
        printf("%d\t", b);
    }
}
