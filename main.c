#include <stdio.h>

int main(void)
{
    int n;
    long total = 0;
    int i = 1;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("NG");
        return 0;
    }
    while (1)
    {
        if (i > n)
        {
            break;
        }
        if (i % 2 != 0)
        {
            i++;
            continue;
        }
        total += i;
        i++;
    }
    printf("%ld", total);
    return 0;
}
