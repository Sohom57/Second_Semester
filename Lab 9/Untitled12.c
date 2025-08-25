#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main(){
    int a, b, c, d, e, f;
    printf("Press 1 for Hexadecimal-Decimal\n");
    printf("Press 2 for Decimal-Hexadecimal\n");
    scanf("%d", &a);
    if(a==1){
        printf("Hexadecimal = ");
        char hex[20];
        scanf("%s", hex);
        b=strtol(hex, NULL, 16);
        printf("Decimal = %d\n", b);
    }
    else if(a==2){
        char hex[20];
        printf("Decimal = ");
        scanf("%d", &b);
        sprintf(hex, "%X", b);
        printf("Hexadecimal = %s\n", hex);
    }
}
