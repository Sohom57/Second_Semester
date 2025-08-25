#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char n[1000];
    gets(n);
    int a=strlen(n);
    int b=0, c=0, w=0, num=0, d=0, i, j;
    for(i=0; i<a; i++){
        if(n[i]=='A'||n[i]=='a'||n[i]=='E'||n[i]=='e'||n[i]=='I'||n[i]=='i'||n[i]=='o'||n[i]=='O'||n[i]=='U'||n[i]=='u') w++;
        else if(n[i]>=48&&n[i]<=57) num++;
        else if(n[i]==' ') b++;
        else c++;
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nWhite Spaces: %d", w, c, num, b);
}
