#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
char x[a];
int sum=0;
for(int i =0;i<a;i++)scanf("%c",&x[i]);
for(int i =0;i<a;i++){
    if(x[i]=='7'){sum=1;break;}
}
if(sum==1)printf("YES");
else printf("NO");
return 0;
}