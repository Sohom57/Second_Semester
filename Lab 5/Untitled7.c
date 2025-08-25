#include <stdio.h>

int main()
{
    int n, l, temp=0, length;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &l);
        arr[i]=l;
    }
    length = n;
    for (int i = 0; i < length; i++) {
        for (int j = i+1; j < length; j++) {
           if(arr[i] > arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
        }
    }
    printf("\n");
    for (int i = 0; i < length; i++) {
        printf("%d  ", arr[i]);
    }
    return 0;
}
