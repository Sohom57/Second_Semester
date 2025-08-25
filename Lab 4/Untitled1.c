#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);

    for(int x=a; x<=b; x++){
        printf("\n\nFor %d\n", x);
        for(int y=1; y<=10; y++){
            printf("%d*%d=%d\n", x, y, x*y);
        }
    }
    return 0;
}
