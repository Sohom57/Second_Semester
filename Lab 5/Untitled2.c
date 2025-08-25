#include <stdio.h>
int main()
{
     int a[10],i,s=0;
     for(i=0;i<10;i++)
     {
          scanf("%d",&a[i]);
          s=s+a[i];
     }
     printf("%d", s);
     return 0;
}
