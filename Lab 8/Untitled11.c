//frequency
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char n[1000];
    gets(n);
    int a, i, j, b;
    a=strlen(n);
    for(i=65; i<=90; i++){
        b=0;
        for(j=0; j<a; j++) if(i==n[j]) b++;
        if(b) printf("%c-%d\n", i, b);
    }
    for(i=97; i<=122; i++){
        b=0;
        for(j=0; j<=a; j++) if(i==n[j]) b++;
        if(b) printf("%c-%d\n", i, b);
    }
}
