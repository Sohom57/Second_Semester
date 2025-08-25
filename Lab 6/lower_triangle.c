#include<stdio.h>
int main(){
    int n, m, arr[100][100];
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) scanf("%d", &arr[i][j]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(j<=i) printf("%d ", arr[i][j]);
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
