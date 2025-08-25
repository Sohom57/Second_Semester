#include<stdio.h>
int main(){
int a,b,sum=0,sum1=0;
scanf("%d%d",&a,&b);
for(int i = a;i<=b;i++){
    sum=0;
    for(int j=2; j<i; j++){
        if(i%j==0){
            sum=1;
            break;
        }
    }
    if(sum!=1) sum1++;
    
}
printf("%d",sum1);
return 0;
}