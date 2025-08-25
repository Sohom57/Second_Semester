#include<stdio.h>
int main(){
    int a, m=0;
    scanf("%d", &a);

    while(1)
    {

        scanf("%d", &a);
        if(a<0)
        {
            break;
        }
        m+=a;
    }
    printf("%d", m);
}
