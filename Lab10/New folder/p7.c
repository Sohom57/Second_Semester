#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
float jog(int a){
    float s=3.1416*a*a;
    return s;
}
int main(){
    int n, m, sum;
    scanf("%d", &n);
    float c=jog(n);
    printf("%f", c);
}
