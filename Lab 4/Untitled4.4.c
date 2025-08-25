#include<stdio.h>
int main(){
    int i, j, n, k=0;
    scanf("%d", &n);

    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            k=i;
            if(j<=k){
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
}

