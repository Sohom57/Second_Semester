#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
int main(){
    int n, a=0, b=0;
    char hex[20], oct[12];
    printf("Press 1 for Hexadecimal-Octal\n");
    printf("Press 2 for Octal-Hexadecimal\n");
    scanf("%d", &n);
    if(n==1){
        printf("Hexadecimal = ");
        scanf("%s", hex);
        sscanf(hex, "%X", &a);
        int i=0;
        while(a>0){
            oct[i]=a%8;
            a/=8;
            i++;
        }
        printf("Octal = ");
        for(int j= i-1; j>=0; j--) printf("%d", oct[j]);
    }
    else if(n==2){
        printf("Octal = ");
        scanf("%s", oct);
        sscanf(oct, "%o", &b);
        printf("Hexadecimal = %X", b);
    }
}
