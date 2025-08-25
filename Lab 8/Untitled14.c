//Urie dao
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char n[1000], m[1000];
    gets(n);
    int a, b=0, i;
    a=strlen(n);
    for(i=0; i<a; i++){
        if((n[i]>=65&&n[i]<=90)||n[i]>=97&&n[i]<=122){
            m[b++]=n[i];
        }
    }
    m[b]='\0';
    printf("%s", m);
}
