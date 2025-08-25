#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int main(){
    int n, *p, a;
    scanf("%d%d", &n, &a);
    p=&n;
    printf("Address of integer=%d\n", &n);
    printf("Content of integer=%d\n", n);
    printf("Address of pointer=%d\n", &p);
    printf("Content of pointer=%d\n", *p);
    *p=a;
    printf("\n\nAfter Changing:\n");
    printf("Address of Variable=%d\n", &n);
    printf("Content of Variable=%d\n", n);
}
