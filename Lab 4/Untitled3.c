#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);

    for(int x=a; x<=b; x++){
        int k=0;
        for(int y=2; y<x; y++){
            if(x%y==0){
                k++;
            }
        }
        if(k==0){
                printf("%d\t", x);
            }
    }
}
