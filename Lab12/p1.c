/*Create a space in heap(RAM) to put an integer. 
Then print the address of that location created in heap. 
Populate that space with integer value. 
Finally, print the value that is stored in heap.*/
//Dereference
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int *p=(int *)malloc(sizeof(int));
    printf("Address=%d\n", p);
    *p=n;
    printf("Value=%d\n", *p);
}
