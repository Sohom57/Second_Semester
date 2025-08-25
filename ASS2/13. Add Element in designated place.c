#include<stdio.h>
int main(){
    int n, p, q, i;
    scanf("%d", &n);
    int a[n+1];

    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &p);
    int c=p-1;
    scanf("%d", &q);
    for(i=0; i<n; i++)
    {
        if(c==i) a[c]=q;
        printf("%d\t", a[i]);
    }

}

