#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
	{
        printf("\n");
        return 0;
    }
    int number = atoi(argv[1]);
    int i = 2;
    while (i <= number)
	{
        if (number % i == 0)
		{
            printf("%d", i);
            if (number != i) printf("*");
            number /= i;
        }
		else
            ++i;
    }
    printf("\n");
    return 0;
}
