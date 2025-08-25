#include<stdio.h>
#include<string.h>
int main(){
    char n[10001];
    gets(n);
    int i=0, a=0;
    while(n[i]!='\0'){
        if(n[i]==' ') a++;
        i++;
    }
    printf("%d", a+1);
}
