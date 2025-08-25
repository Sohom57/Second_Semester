#include<stdio.h>
int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    for(int x=m; x<=n; x++){
        printf("\n\nFor %d\n", x);
        for(int y=1; y<=x; y++){
            if(x%y==0){
                printf("%d  ", y);
            }
        }
    }
}
