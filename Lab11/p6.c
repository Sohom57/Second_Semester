/*Print all the elememts of an array along with their physical address with the help of 
the concept of dereferencing. Besides show the elements of their address with the
help of indexing system.
*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int array( int arr[], int size){
    int *p;
    for(int i=0; i<size; i++){
        p=&arr[i];
        printf("Address of %d is =%d\n", *p, p);
    }
    printf("\n\n");
    for(int i=0; i<size; i++) printf("Address of index %d is =%d\n", i, &arr[i]);
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int a=sizeof(arr)/sizeof(arr[0]);
    array(arr, a);
}