int simple_atoi(const char *str)
{
	int res = 0;
	while(*str)
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res);
}
void ft_putnbr(int nb)
{
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	char digit = nb % 10 + '0';
	write(1,  &digit, 1);
}

int main (int ac, char **av)
{
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		int i = 1;
		int nbr = simple_atoi(av[1]);
		while ( i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
}
