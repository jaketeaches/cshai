#include "stdio.h"

int fib(int n, int *cache)
{
    // add to cache if not exists
    if (cache[n] == -1)
        cache[n] = fib(n - 1, cache) + fib(n - 2, cache);

    return cache[n];
}

int main()
{
    int cache[1000] = {[0 ... 999] = -1};
    cache[0]        = 0;
    cache[1]        = 1;

    printf("%d", fib(40, cache));
    return 0;
}
