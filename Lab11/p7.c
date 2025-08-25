/*If i want to iterate over an array with the help of a user-defined function, 
should I pass the size of the array from main function? Or should I not. 
Explain with necessary code.
*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int array( int *arr, int size){
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    int a=sizeof(arr)/sizeof(arr[0]);
    array(arr, a);
}
