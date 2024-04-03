#include <unistd.h>

void write_word(char *start, char *end)
{
    while (start < end)
    {
        write(1, start++, 1);
    }
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    char *str = argv[1];

   
    while (*str == ' ' || *str == '\t')
    {
        str++;
    }

   
    char *first_word_start = str;
    while (*str && *str != ' ' && *str != '\t')
    {
        str++;
    }
    char *first_word_end = str;

   
    while (*str == ' ' || *str == '\t')
    {
        str++;
    }

    while (*str)
    {
        if (*str == ' ' || *str == '\t')
        {
            write(1, " ", 1);
            while (*str == ' ' || *str == '\t')
            {
                str++;
            }
        }
        else
        {
            write(1, str++, 1);
        }
    }

  
    if (first_word_start < first_word_end)
    {
        write(1, " ", 1);
        write_word(first_word_start, first_word_end);
    }

    write(1, "\n", 1);
    return 0;
}
