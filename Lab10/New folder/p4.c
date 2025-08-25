#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int jog(int a, int b){
    int c, d;
    if(a>b){
        c=b;
        d=a;
    }
    else{
        c=a;
        d=b;
    }
    return d;
}
int main(){
    int n, m, c;
    scanf("%d%d", &n, &m);
    c=jog(n, m);
    printf("%d", c);
}
