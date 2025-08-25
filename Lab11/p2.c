/*Create an integer variable and assign 1025 to that integer variable.
Point to that integer variable with an integer pointer and a character pointer.
Show the address of the pointer variables. Now dereference both the pointer
variables and show outputs. Also print the next address for both the pointer variables.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int main(){
    int n=1025, *p;
    p=&n;
    char *q=&n;
    printf("Address=%d\nValue=%d\n", p, *p);
    printf("Address=%d\nValue=%d", q, *q);
    printf("\n\nNext Value:\n");
    printf("Address=%d\nValue=%d\n", p+1, *(p+1));
    printf("Address=%d\nValue=%d", q+1, *(q+1));
}