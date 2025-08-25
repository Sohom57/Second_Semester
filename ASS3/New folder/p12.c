#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int main(){
    int n, arr[32], a=0, i;
    scanf("%d", &n);
    while(n>0){
        arr[a]=n&1;
        n=n>>1;
        a++;
    }
    for(i=a-1; i>=0; i--) printf("%d", arr[i]);
}
