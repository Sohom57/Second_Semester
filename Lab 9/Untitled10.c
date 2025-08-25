#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main(){
    char a[1000][1000], e[1000];
    int b;
    scanf("%d", &b);
    for(int i=0; i<b; i++) scanf("%s", a[i]);
    for(int i=0; i<b; i++){
        for(int j=i; j<b; j++){
            if(strcmp(a[i], a[j])>0){
                strcpy(e, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], e);
            }
        }
    }
    for(int i=0; i<b; i++) printf("%s ", a[i]);
}
