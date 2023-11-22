#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int	checklen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

void	rev_print(char *str)
{
	int len = checklen(str);

	while (len-- > 0)
		putchar(str[len]);
	return ;
}

int	main(int ac, char **av)
{
	if (ac == 2 && av[1] != NULL)
		rev_print(av[1]);
	putchar('\n');
	return (42);
}
