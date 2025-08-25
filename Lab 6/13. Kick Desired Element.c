//kick element
#include<stdio.h>
int main(){
    int n, p;
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &p);
    for(int i=p-1; i<n-1; i++) a[i]=a[i+1];
    for(int i=0; i<n-1; i++) printf("%d\t", a[i]);
}
