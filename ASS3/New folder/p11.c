#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int main(){
    int n, a;
    scanf("%d%d", &n, &a);
    printf("Left Rotation of %d by %d is = ", n, a);
    printf("%d\n", (n<<a)|(n>>(32-a)));
    printf("Right Rotation of %d by %d is = ", n, a);
    printf("%d\n", (n>>a)|(n<<(32-a)));
}
