#include<stdio.h>
int main(){
    int a, m=0;
    scanf("%d", &a);

    while(a>0)
    {
        m+=a;
        scanf("%d", &a);
    }
    printf("%d", m);
}
