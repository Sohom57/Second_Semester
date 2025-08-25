#include<stdio.h>
int main(){
    int a, b=0, c;

    for(a=1; a<=3; a++){
        scanf("%d", &c);
        b+=c;
    }
    printf("%d", b);
}
