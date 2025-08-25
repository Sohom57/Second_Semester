#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int main(){
  int n, a, b;
  scanf("%d%d", &n, &a);
  b=n>>a;
  b=n&(1<<a);
  if(b==1) printf("%d'th bit of %d is 1", a, n);
  else printf("%d'th bit of %d is 0", a, n);
}
