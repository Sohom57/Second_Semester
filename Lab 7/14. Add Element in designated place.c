#include<stdio.h>
int main(){
    int n, m, a, b;
    scanf("%d%d%d", &n, &m, &a);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=0; i<n; i++) printf("%d\t", arr[i]);
    printf("\n");
    b=m-1;
    for(int i=n; i>=b; i--) arr[i]=arr[i-1];
    arr[b]=a;
    n++;
    for(int i=0; i<n; i++) printf("%d\t", arr[i]);
}
