#include<stdio.h>
#include<string.h>
int main(){
    int m;
    scanf("%d", &m);
    (m%400==0||(m%4==0&&m%100!=0))
    ?printf("Leap Year\n")
    :printf("Not Leap Year\n");
}
