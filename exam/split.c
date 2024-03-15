#include <stdio.h>
#include <stdlib.h>

char **split(char *str);

int main()
{
    char *s = " helloaa aa   a  ";
    char **words = split(s);

    printf("Words hola:\n");
    for (int i = 0; words[i]; i++)
    {
        printf("%s\n", words[i]);
    }

    // Liberar memoria asignada a las palabras
    for (int i = 0; words[i]; i++)
    {
        free(words[i]);
    }
    free(words);

    return 0;
}

char **split(char *str)
{

    return NULL;
}
