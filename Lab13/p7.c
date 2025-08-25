/*W.A.C.P to find power of a number using recursion.
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
long long power(int a, int b){
    static int i=1;
    if(b==0) return i;
    else i=i*a;
    return power(a, b-1);
}
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    long long s=power(n, m);
    printf("Number=%lld", s);
}