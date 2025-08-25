/*When an array is passed to a user-defined function how many actual a
are passed to that function? Show, when array is received in a user-defined
function in a local parameter, the local parameter actually works as a pointer variable
Implement with a code.
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
