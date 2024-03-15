#include <stdlib.h>

char    **ft_split(char *str)
{
    char    **split;
    int     i = 0;
    int     j;

    if (!str || !(split = malloc(sizeof(char *) * 256)))
        return NULL;
    while (*str)
    {
        while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
            str++;
        if (*str)
        {
            j = 0;
            if (!(split[i] = malloc(sizeof(char) * 4096)))
                return NULL;
            while (*str && *str != ' ' && *str != '\t' && *str != '\n')
                split[i][j++] = *str++;
            split[i++][j] = '\0';
        }
    }
    split[i] = NULL;
    return split;
}

