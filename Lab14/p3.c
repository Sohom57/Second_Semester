/*
W.A.C.P which display source code as an output
*/
#include <stdio.h>
int main(){
    FILE *p;
    char ch;
    p=fopen(__FILE__, "r");
    while((ch=fgetc(p))!=EOF){
        putchar(ch);
    }
}
