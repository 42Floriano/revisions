#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}
void	rev_print(char *str)
{
	int i = ft_strlen(str);
	while(i)
		putchar(str[--i]);
	putchar('\n');
	return ;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		putchar('\n');
		return (0);
	}
	rev_print(argv[1]);
	return (42);
}
