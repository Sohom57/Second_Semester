#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int jog(int a, int b){
    float s=a/b;
    return s;
}
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    float c=jog(n, m);
    printf("%f", c);
}
