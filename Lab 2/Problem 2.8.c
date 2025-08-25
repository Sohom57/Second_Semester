#include <stdio.h>

int main() {
    int a, b=0, l, i, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &a);
        if(a>=b){
            l=a;
        }
        b=a;
    }
    printf("The largest number is: %d\n", l);

    return 0;
}

