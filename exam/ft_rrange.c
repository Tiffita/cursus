#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int *range;
    int n = abs(end - start) + 1;

    range = malloc(sizeof(int) * n);
    if (range)
    {
        int step = (start < end) ? -1 : 1;
        int i = 0;
        while (i < n)
        {
            range[i] = end;
            end += step;
            i++;
        }
    }
    return range;
}

