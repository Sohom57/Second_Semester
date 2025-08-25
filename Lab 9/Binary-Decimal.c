#include<stdio.h>
#include<math.h>
int main(){
    int n, arr[1001], i=0, j=1;
    scanf("%d", &n);
    while(n>0){
        int a=n%10;
        i+=a*j;
        j*=2;
        n/=10;
    }
    printf("%d", i);
}