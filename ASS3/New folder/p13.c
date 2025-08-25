#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int main(){
    int n,m;
    scanf("%d%d", &n, &m);
    printf("n=%d\tm=%d\n\n", n, m);
    n=n^m;
    m=n^m;
    n=n^m;
    printf("n=%d\tm=%d", n, m);
}
