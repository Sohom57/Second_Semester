#include<stdio.h>
int main(){
    int a=1, b, c, d;
    scanf("%d", &d);
    for(c=1; c<=d; c++){
        if(a==-40){
            printf("%d", a);
            break;
        }
        if(a%2!=0){
            printf("%d", a);
        }
        else{
            b=a*-1;
            printf("%d", b);
        }
        if(c!=d){
            printf(", ");
        }
        a+=3;
    }
}
