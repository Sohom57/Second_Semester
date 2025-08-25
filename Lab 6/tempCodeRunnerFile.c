#include <stdio.h>
int main ()
{
    int arr[100], i, j, k, x, t;
    scanf (" %d", &x);
    for( i=0; i<x; i++) scanf ("%d", &arr[i]);
    for( i=0; i<x; i++){
        for(j=i+1; j<x; j++){
            if(arr[i]==arr[j]){
                for(k=j; k<x-1; k++) arr[k]=arr[k+1];
                x--;
                j--;
            }
        }
    }