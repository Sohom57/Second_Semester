#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main(){
    int a, b, c, d, e, f;
    printf("Press 1 for Hexadecimal-Binary\n");
    printf("Press 2 for Binary-Hexadecimal\n");
    scanf("%d", &a);
    if(a==1){
        printf("Hexadecimal = ");
        char hex[20];
        scanf("%s", hex);
        b=strtol(hex, NULL, 16);
        int arr[32], i=0;
        while(b>0){
            arr[i]=b%2;
            b/=2;
            i++;
        }
        printf("Binary = ");
        for(int j=i-1; j>=0; j--) printf("%d", arr[j]);
    }
    else if(a==2){
        char hex[20];
        printf("Binary = ");
        scanf("%d", &b);
        c=0, d=1;
        while(b>0){
            e=b%10;
            c+=e*d;
            d*=2;
            b/=10;
        }
        sprintf(hex, "%X", c);
        printf("Hexadecimal = %s\n", hex);
    }
}
