#include <unistd.h>

void	putchar (char c)
{
	write(1, &c, 1);
	return ;
}

void	epur_str(char *str)
{
	int i;
	int beg;
	int space;
	i = 0;
	beg = 0;

	while(str[i])
	{
		space = 0;
		while (beg == 0 && (str[i] == 9 || str[i] == 32))
		{
			i++;			
		}
		beg = 1;
		while (str[i] && (str[i] != 9 && str[i] != 32))
		{
			putchar(str[i]);
			i++;
		}
		if (str[i + 1] == '\0')
			break ;
		while (str[i] && str[i + 1] != '\0' && (str[i] == 9 || str[i] == 32))
		{
			if(space == 0)
			{
				space = 1;
				putchar(' ');
				i++;
			}
			else
			{
				i++;
			}	
		}
	}
	putchar('\n');
	return ;
}
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		putchar('\n');
		return (42);
	}
	epur_str(argv[1]);
	return (42);
}
