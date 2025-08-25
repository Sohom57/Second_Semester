#include<stdio.h>
int main(){
    int g;
    int arr[10];

    for(g=0; g<10; g++){
        scanf("%d", &arr[g]);
    }
    for(g=0; g<10; g++){
            printf("%d  ", arr[g]);
    }

}
