#include <stdio.h>

int main()
{
    int n, l, t=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &l);
        arr[i]=l;
    }
    l = n;
    for (int i = 0; i < l; i++) {
        for (int j = i+1; j < l; j++) {
           if(arr[i] > arr[j]) {
               t = arr[i];
               arr[i] = arr[j];
               arr[j] = t;
           }
        }
    }
    printf("%d", arr[n-2]);
    
}
