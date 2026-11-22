#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int x);

int main(void)
{
    int m = 9966990;
    int x = 0;
    int ans = 0;

    scanf("%d", &x);
    if (x > m)
    {
        printf("NG");
        return 0;
    }

    ans = gcd(m, x);
    printf("%d", ans);
    return 0;
}

int gcd(int m, int x)
{
    int r;
    int a = m;
    int b = x;

    for (; b != 0;)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return abs(a);
}
