#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);\
	return ;
}

int	len(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

void	search(char *str, char a, char b)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == a)
			putchar(b);
		else
			putchar(str[i]);
		i++;
	}
	putchar('\n');
	return ;
}

int	main(int argc, char **argv)
{
	if(argc != 4 || len(argv[2]) > 1 || len(argv[3]) > 1)
	{
		putchar('\n');
		return (42);
	}
	search(argv[1], argv[2][0], argv[3][0]);
	return (42);
}
