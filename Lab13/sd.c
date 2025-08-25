#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
int dcount(int n){
    if(n<=1) return n;
    else{
        return dcount(n-1)+dcount(n-2);
    }
}
int main(){
    int n; 
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("%d ", dcount(i));
    }
}