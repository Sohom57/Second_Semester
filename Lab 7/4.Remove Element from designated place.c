#include<stdio.h>
int main(){
    int n, m, a;
    scanf("%d%d", &n, &m);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=0; i<n; i++) printf("%d\t", arr[i]);
    printf("\n");
    a=m-1;
    for(int i=a; i<n-1; i++) arr[i]=arr[i+1];
    for(int i=0; i<n-1; i++) printf("%d\t", arr[i]);
}
