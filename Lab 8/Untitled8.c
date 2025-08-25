//Count different elements
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char n[100];
    gets(n);
    int a=strlen(n);
    int b=0, c=0, w=0, num=0, i, j;
    for(i=0; i<a; i++){
        if((n[i]>=65&&n[i]<=90)||(n[i]>=97&&n[i]<=122))
            w++;
        if(n[i]>=48&&n[i]<=57)
            num++;
    }
    printf("Special Characters: %d\n", a-(w+num));
    printf("Alphabets: %d\n", w);
    printf("Numbers: %d", num);
}
