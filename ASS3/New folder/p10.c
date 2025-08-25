#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int main()
{
    int n, a=0, b=0;
    scanf("%d", &n);
    while(n>0){
        (n%2==0)? a++ : b++;
        n>>=1;
    }
    printf("0's = %d\n1's = %d", a, b);
}
