#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main(){
    int arr[1000];
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int f=0;
    for(int i=0; i<n; i++) f^=arr[i];
    printf("Odd Occurring Number = %d\n", f);
}
