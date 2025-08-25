#include <stdio.h>
int main() {
    float p[100], j= 0.0, q;
    for (int i=1; i<=10; i++) {
        scanf("%f", &p[i]);
        j+=p[i];
    }

    q = j / 10;
    printf("Average = %.2f", q);
    return 0;
}
