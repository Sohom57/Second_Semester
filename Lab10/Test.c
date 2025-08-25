#include<stdio.h>
int main(){
    int v=387;
    int *p;
    p=&v;
    char *p1;
    p1=p;
    printf("%d", *(p1+1));
}
