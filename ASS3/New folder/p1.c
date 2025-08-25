#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int main(){
    int n, a;
    scanf("%d", &n);
    (n%2==0)? printf("LSB of %d is not set", n)
    : printf("LSB of %d is set", n);
}
