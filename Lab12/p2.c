/*Create a space in heap that can allocate n integers in a contiguous fashion. 
Populate the spaces with n integers taken from user with the help of loop and 
dereferencing. Then print the values along with their addresses with the concept 
of dereferencing.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
#include<limits.h>
int main(){
    int n, i;
    scanf("%d", &n);
    int *p=(int *)malloc(sizeof(int));
    for(i=0; i<n; i++) scanf("%d", p+i);
    for(i=0; i<n; i++){
        printf("Value=%d, Address=%d\n", *(p+i), (p+i));
    }
}
