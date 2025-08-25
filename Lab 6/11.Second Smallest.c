#include <stdio.h>

int main()
{
    int n, l, t=0, arr[1000];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &l);
        arr[i]=l;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
           if(arr[i] > arr[j]) {
               t = arr[i];
               arr[i] = arr[j];
               arr[j] = t;
           }
        }
    }
    printf("%d", arr[1]);

}

