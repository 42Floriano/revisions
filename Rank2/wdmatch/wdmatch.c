#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	wdmatch(char *strone, char *strtwo)
{
	int i = 0;
	int y = 0;
	
	while(strone[i] && strtwo[y])
	{
		if(strtwo[y] == strone[i])
			i++;
		y++;
	}
	if (strone[i] == '\0')
	{
		i = 0;
		while(strone[i])
			putchar(strone[i++]);
	}
	putchar('\n');
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		putchar('\n');
		return (42);
	}
	wdmatch(argv[1], argv[2]);
	return (42);
}
