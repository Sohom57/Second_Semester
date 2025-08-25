#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int jog(int a, int b, int c){
    int d;
    if(a<b&&a<c) d=a;
    else if(b<a&&b<c) d=b;
    else if(a>c&&b>c) d=c;
}
int main(){
    int n, m, a, c;
    scanf("%d%d%d", &n, &m, &c);
    a=jog(n, m, c);
    printf("%d", a);
}
