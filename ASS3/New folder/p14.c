#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    (n&1==1)?printf("Odd"):printf("Even");
}

