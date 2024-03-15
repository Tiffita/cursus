#include <unistd.h>

char 	get_char(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		c += 13;
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		c -= 13;
	return (c);
}

int main	(int ac, char **av)
{
	char c;
	if (ac == 2)
	{
		while(*av[1])
		{
		c = get_char(*av[1]);
		write(1, &c, 1);
		av[1]++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
