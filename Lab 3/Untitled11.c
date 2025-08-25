#include<stdio.h>
int main(){
    int a, b, c=1, d;
    scanf("%d", &b);
    for(d=1; d<=b; d++){
        printf("%d", c);
        c+=(4+2*(d-1));
        if(d!=b){
            printf(", ");
        }
    }
}
