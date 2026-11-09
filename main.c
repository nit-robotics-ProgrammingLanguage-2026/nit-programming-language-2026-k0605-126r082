#include <stdio.h>

int main(void)
{
    int limit;
    if (scanf("%d", &limit) != 1) {
        return 0;
    }
    if (limit < 0) {
        printf("NG");
        return 0;
    }

    int even_count = limit / 2;
    long long total = 0;
    for (int position = 1; position <= even_count; position++) {
        total += 2LL * position;
    }

    printf("%lld", total);
    return 0;
}