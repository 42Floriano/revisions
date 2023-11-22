#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	inter(char *strone, char *strtwo)
{
	int i = 0;
	int tab[255] = {0};

	while(strtwo[i])
	{
		if(tab[strtwo[i]] == 0)
		{
			tab[strtwo[i]] = 1;
		}
		i++;
	}
	i = 0;
	while(strone[i])
	{
		if (tab[strone[i]] == 1)
		{
			putchar(strone[i]);
			tab[strone[i]] -= 1;
		}
		i++;
	}
	return ;
}

int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	putchar('\n');
	return (42);
}
