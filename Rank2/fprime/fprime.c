#include <unistd.h>
#include <stdlib.h>

void	putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	printint(unsigned int nb)
{
	if (nb > 9)
	{
		printint(nb / 10);
		printint(nb % 10);
	}
	else
		putchar(nb + 48);

	return ;
}

void	fprime(unsigned int nb)
{
	unsigned int prime = 2;

	if (nb == 1)
		putchar(nb + 0);
	else 
	{
		while(nb > 1)
		{
			if(nb % prime == 0)
			{
				printint(prime);
				nb = nb / prime;
				if (nb > 1)
					putchar('*');
				prime--;
			}
		prime++;
		}
	}
	return ;
}

int	main(int ac, char **av)
{
	if (ac == 2 && av[1] != NULL)
		fprime(atoi(av[1]));
	putchar('\n');
	return (42);
}
