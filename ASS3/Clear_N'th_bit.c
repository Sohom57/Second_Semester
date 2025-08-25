#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int main(){
  int n, a, b, c;
  scanf("%d%d", &n, &a);
  printf("%d", n);
  b=~(1<<a);
  c=n&b;
  printf("%d", c);
}
