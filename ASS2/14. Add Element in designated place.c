#include<stdio.h>
int main(){
    int n, p, q, i;
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &p);
    scanf("%d", &q);
    for(i=n; i>=p; i--) a[i]=a[i-1];
    a[p]=i;
    n++;
    for(i=0; i<n; i++) printf("%d\t", a[i]);
}

