#include <stdio.h>

int main()
{
    int n, t=0, arr[1000];
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
           if(arr[i] > arr[j]) {
               t = arr[i];
               arr[i] = arr[j];
               arr[j] = t;
           }
        }
    }
    printf("Largest Element = %d\nSmallest Element = %d", arr[n-1], arr[0]);
}

