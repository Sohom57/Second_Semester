#include<stdio.h>
#include<math.h>
int main()
{

    long long a, b;
    double c;
    scanf("%lld%lld", &a, &b);

    c= pow(a, b);

    printf("%.1lf", c);
}
