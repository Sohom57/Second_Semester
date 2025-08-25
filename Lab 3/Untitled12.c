#include<stdio.h>
int main(){
    int a=1, b, c, d, e;
    scanf("%d", &b);
    for(c=1; c<=b; c++){
        printf("(");
        for(d=1; d<=c; d++){
            printf("%d", d);
            if(d!=c) printf("+");
        }
        if(c!=b) printf(")");
        if(c!=b) printf("+");
    }
    printf(")");
}
