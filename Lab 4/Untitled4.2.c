#include<stdio.h>
int main(){
    int i, j, n, k=0;
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            k=n-i;
            if(j<=k){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}

