#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char n[100], m[100];
    gets(n);
    gets(m);
    strcat(n,  m);
    puts(n);
}
