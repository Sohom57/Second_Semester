#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
int rev(int n, int c){
    int b=0;
    if(n==0) return c;
    else{
        int i=n%10;
        c=c*10+i;
        return rev(n/10, c);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int m=rev(n, 0);
    printf("Reversed = %d\n", m);
}
