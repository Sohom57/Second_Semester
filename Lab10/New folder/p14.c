#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int dsum(int a){
    int b, c=0, d, arr[10001], i=0;
    while(a>0){
        b=a%10;
        arr[i]=b;
        a/=10;
        i++;
    }
    for(int j=0; j<3; j++) printf("%d", arr[j]);
}
int main(){
    int n;
    scanf("%d", &n);
    dsum(n);
}