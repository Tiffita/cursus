#include <unistd.h>

void ft_putstr(*s)
{
	while(*)
		write(1, s++, 1);
}

int main(int ac, char **av)
{
	char *tmp;

	if (ac == 3)
	{
		tmp = av[1];
		while(*tmp && *av[2])
		{
			while (*tmp == *av[2] && (*tmp && *av[2]))
			{
				tmp++;
				av[2]++;
			}
			av[2]++;
		}
		if (!(*tmp))
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return(0);
}
