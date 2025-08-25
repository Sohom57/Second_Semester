#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int main(){
    int n, a;
    scanf("%d%d", &n, &a);
    printf("Number after setting %d'th bit = %d", a, n|(1<<a));
}
