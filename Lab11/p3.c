/*Create an integer variable and assign any value. Point that integer variable 
with a single pointer, double pointer and triple pointer. Now print address of all pointer variables. 
Print the value of the integer variable after dereferencing for the triple pointer, double pointer
and the single pointer. Modify the value of the integer variable with the cocept
of dereferencing by the triple, double, single pointer.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int main() {
    int n, a, b, c;
    scanf("%d%d%d%d", &n, &a, &b, &c);
    int *p, **q, ***r;
    p=&n;
    q=&p;
    r=&q;
    printf("Address of Single pointer = %d\n", &p);
    printf("Address of Double pointer = %d\n", &q);
    printf("Address of Triple pointer = %d\n", &r);
    printf("Single pointer's value = %d\n", *p);
    printf("Double pointer's value = %d\n", **q);
    printf("Triple pointer's value = %d\n", ***r);
    *p=a;
    printf("Updated value of integer variable = %d\n", n);
    **q=b;
    printf("Updated value of integer variable = %d\n", n);
    ***r=c;
    printf("Updated value of integer variable = %d\n", n);
}
