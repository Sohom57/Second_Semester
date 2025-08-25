#include<stdio.h>
int main ()
{
    int n,k,sum=1,a,b;
    scanf("%d%d",&n,&k);
    if(n%k==0){
        sum=sum+1;
        a=n/2;
        if(n%2!=0){
            a+=1;
        }
        b=n/2;
        printf("%d\n%d %d",sum,a,b);
    }
    else{
        printf("%d\n%d",sum,n);
    }
    return 0;
}
