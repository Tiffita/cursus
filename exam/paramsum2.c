#include <unistd.h>

int main(int argc, char **argv)
{
    (void)argv;

    char digit = argc - 1 + '0';
    write(1, &digit, 1);
    write(1, "\n", 1);

    return 0;
}
