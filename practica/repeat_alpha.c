#include <unistd.h>

int get_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	else if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	return(1);
}

int main(int ac, char **av)
{
	int i = 0;
	int count;

	if (ac == 2)
	{
		while(av[1][i])
		{
			count = get_letter(av[1][i]);
			while(count--)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);

}

