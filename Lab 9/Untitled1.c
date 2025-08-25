#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main(){
    char n[10001];
    gets(n);
    int i;
    for(i=0; i<10001; i++){
        if(n[i]=='\0') break;
    }
    printf("%d", i);
}
