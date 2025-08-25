//Add element
#include<stdio.h>
int main(){
    int n, p, q, i;
    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=0; i<n; i++) printf("%d\t", a[i]);
    printf("\n");
    scanf("%d%d", &p, &q);
    p=p-1;
    for(i=n; i>=p; i--) a[i]=a[i-1];
    a[p]=q;
    n++;
    for(i=0; i<n; i++) printf("%d\t", a[i]);
}

