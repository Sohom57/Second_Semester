#include<stdio.h>
int main ()
{
    int i,n,j=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        j++;
        printf("*");
        if(j==5||j==10||j==15||j==20||j==25){
                printf("   ");
            }
        }
    printf("\n");
    j=0;
    for(i=1;i<=n;i++){
        j++;
        if(i==1||i==6||i==11||i==16||i==24){
            printf("*");
            }
            else{
                printf(" ");
            }
        if(j==5||j==10||j==15||j==20||j==25){
                printf("   ");
            }
        }
    printf("\n");
    j=0;
    for(i=1;i<=n;i++){
        j++;
        if(i==2||i==3||i==4||i==5||i==14||i==15||i==21||i==22||i==24||i==25){
            printf(" ");
        }
        else{
            printf("*");
        }
        if(j==5||j==10||j==15||j==20||j==25){
                printf("   ");
            }
        }
    printf("\n");
    j=0;
    for(i=1;i<=n;i++){
        j++;
        if(i==1||i==10||i==11||i==20||i==22){
            printf("*");
        }
        else{
            printf(" ");
        }
        if(j==5||j==10||j==15||j==20||j==25){
                printf("   ");
            }
        }
    printf("\n");
    j=0;
    for(i=1;i<=n;i++){
        j++;
        if(i==22||i==23||i==24||i==25){
            printf(" ");
        }
        else{
            printf("*");
        }
        if(j==5||j==10||j==15||j==20||j==25){
                printf("   ");
            }
        }
    return 0;
}
