#include<stdio.h>
int main(){

    float a=7.0;

    while(a-=.5)
    {
        printf("%.2f\n",a);
    }
}
