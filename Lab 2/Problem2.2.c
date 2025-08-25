#include <stdio.h>
int main()
{
    int q = 100;

w:
    printf("%d ", q--);
    if (q >= 1)
    {
        goto w;
    }
}

