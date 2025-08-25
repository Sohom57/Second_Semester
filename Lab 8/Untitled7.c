#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char n[100], a[100];
    gets(n);
    int i, j, k=0;
    j=strlen(n);
    for(i=0; i<j; i++){
        if(n[i]>=48&&n[i]<=57){
            continue;
        }
        else a[k++]=n[i];
    }
    a[k]='\0';
    puts(a);
}
