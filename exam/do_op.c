#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (*av[2] == '+')
			printf("%d", (atoi(av[1]) + atoi(av[3])));
		else if (*av[2] == '-')
			printf("%d", (atoi(av[1]) - atoi(av[3])));
		else if (*av[2] == '*')
			printf("%d", (atoi(av[1]) * atoi(av[3])));
		else if (*av[2] == '/')
			printf("%d", (atoi(av[1]) / atoi(av[3])));
		else
			printf("%d", (atoi(av[1]) % atoi(av[3])));
	}
	printf("\n");
}
