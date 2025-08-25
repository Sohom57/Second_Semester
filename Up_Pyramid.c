#include <stdio.h>

int main()
{
    int n, s, i, j;
    scanf("%d",&n);
    for(i = 0; i <= n; i++){
        for(s = n; s > i; s--){
            printf(" ");
        }
        for(j=0; j<i; j++){
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}








