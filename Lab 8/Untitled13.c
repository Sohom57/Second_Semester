#include<stdio.h>
#include<string.h>
void pera(char *n){
    strrev(n);
}
int main(){
    char n[1000];
    gets(n);
    pera(n);
    printf("%s", n);
}
